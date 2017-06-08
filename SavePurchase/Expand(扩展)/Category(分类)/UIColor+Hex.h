//
//  UIColor+Hex.h
//  SavePurchase
//
//  Created by JF.Zhan on 2017/6/8.
//  Copyright © 2017年 JF.Zhan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (Hex)

+ (UIColor *)colorWithHex:(NSString *)hexString alpha:(float)alpha;

+ (UIColor *)colorWithHex:(NSString *)hexString;

@end
