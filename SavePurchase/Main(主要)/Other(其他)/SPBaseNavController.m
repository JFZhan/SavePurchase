//
//  SPBaseNavController.m
//  SavePurchase
//
//  Created by JF.Zhan on 2017/6/8.
//  Copyright © 2017年 JF.Zhan. All rights reserved.
//

#import "SPBaseNavController.h"

@interface SPBaseNavController ()

@end

@implementation SPBaseNavController

- (void)viewDidLoad {
    [super viewDidLoad];
    [self configUI];
}

- (void)configUI {

    self.view.backgroundColor = [UIColor colorWithHex:@"#f5f5f5"];
    if (self.navigationController.viewControllers.count > 1) {
        self.navigationItem.leftBarButtonItem = [self backItemWithImage:[UIImage imageNamed:@"back"] highImage:[UIImage imageNamed:@"back"] target:self action:@selector(back) title:@""];
        self.navigationController.interactivePopGestureRecognizer.delegate = (id)self;
        if ([self.navigationController respondsToSelector:@selector(interactivePopGestureRecognizer)]) {
            self.navigationController.interactivePopGestureRecognizer.enabled = YES;
        }
    }
}

- (void)back {
    [self.navigationController popViewControllerAnimated:YES];
}

- (UIBarButtonItem *)backItemWithImage:(UIImage *)image highImage:(UIImage *)highImage target:(id)target action:(SEL)action title:(NSString *)title {

    UIButton *backButton = [UIButton buttonWithType:UIButtonTypeCustom];
    [backButton setFrame:CGRectMake(0, 0, 20, 20)];
    [backButton setTitle:title forState:UIControlStateNormal];
    [backButton setImage:image forState:UIControlStateNormal];
    [backButton setImage:highImage forState:UIControlStateHighlighted];
    [backButton setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
    [backButton setTitleColor:[UIColor redColor] forState:UIControlStateHighlighted];
    backButton.titleLabel.font = [UIFont systemFontOfSize:14];
    backButton.contentEdgeInsets = UIEdgeInsetsMake(0, -20, 0, 0);
    backButton.imageEdgeInsets = UIEdgeInsetsMake(0, 20, 0, 0);
    [backButton addTarget:target action:action forControlEvents:UIControlEventTouchUpInside];
    
    return [[UIBarButtonItem alloc] initWithCustomView:backButton];
    
}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {

    [self.view endEditing:YES];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];

}



@end
