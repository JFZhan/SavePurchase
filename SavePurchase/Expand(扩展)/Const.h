//
//  Const.h
//  SavePurchase
//
//  Created by JF.Zhan on 2017/6/8.
//  Copyright © 2017年 JF.Zhan. All rights reserved.
//

#ifndef Const_h
#define Const_h

#define kNavBarColor UIColorFromRGB(0xffd21d)
#define MainWidth    [[UIScreen mainScreen]bounds].size.width

#define MainHeight    [[UIScreen mainScreen]bounds].size.height

#define kMsgTextColor  UIColorFromHex(0xe0dbda)

#define kAppThemeColor UIColorFromRGB(0xffd21d)


#define kSeparatorColor UIColorFromRGB(0xd7d6d6)
#define kNormalWordColor kBlackColor

#define kSearchBabyBgColor UIColorFromRGB(0xf6f6f6)
#define kMKBgColor UIColorFromRGB(0xf8f8f8)

#define kGrayWordColor UIColorFromRGB(0xc6c6c6)
#define kPersonalDataColor UIColorFromRGB(0xf8f9f1)
#define kPersonalDataTipColor UIColorFromRGB(0xececec)
#define kMKRecordGreenColor UIColorFromRGB(0x00bc2d)

#define kRedBagColor UIColorFromRGB(0xff4e45)

#define KFreeTimeColor [UIColor colorWithRed:105/255. green:188/255. blue:246/255. alpha:1]
#define KChattingTimeColor [UIColor colorWithRed:217/255. green:116/255. blue:132/255. alpha:1]
#define KBusyStatus [UIColor colorWithRed:221/255. green:223/255. blue:228/255. alpha:1]
#define KCommon [UIColor colorWithRed:36/255. green:40/255. blue:51/255. alpha:1]

#define KNickName [UIColor colorWithRed:68/255. green:68/255. blue:68/255. alpha:1]
#define KTitle [UIColor colorWithRed:51/255. green:51/255. blue:51/255. alpha:1]
#define KUserInfo [UIColor colorWithRed:72/255. green:72/255. blue:72/255. alpha:1]

#define KHostInfo [UIColor colorWithRed:102/255. green:102/255. blue:102/255. alpha:1]
#define KHostPrice [UIColor colorWithRed:255/255. green:166/255. blue:4/255. alpha:1]

#define font(s) [UIFont systemFontOfSize:s]
#define image(s) [UIImage imageNamed:s]
#define Tip(s)  [[MDCustomTip share] showTip:s]

#define iOS9Later ([UIDevice currentDevice].systemVersion.floatValue >= 9.0f)


// 定义通用颜色
#define kBlackColor         [UIColor blackColor]
#define kDarkGrayColor      [UIColor darkGrayColor]
#define kLightGrayColor     [UIColor lightGrayColor]
#define kWhiteColor         [UIColor whiteColor]
#define kGrayColor          [UIColor grayColor]
#define kRedColor           [UIColor redColor]
#define kGreenColor         [UIColor greenColor]
#define kBlueColor          [UIColor blueColor]
#define kCyanColor          [UIColor cyanColor]
#define kYellowColor        [UIColor yellowColor]
#define kMagentaColor       [UIColor magentaColor]
#define kOrangeColor        [UIColor orangeColor]
#define kPurpleColor        [UIColor purpleColor]
#define kClearColor         [UIColor clearColor]
// 背景色
#define kAppBakgroundColor          kWhiteColor


//==============================

#define IMALocalizedError(intCode, enStr) NSLocalizedString(([NSString stringWithFormat:@"%d", (int)intCode]), enStr)

//常用的字体
#define kCommonLargeTextFont       [UIFont systemFontOfSize:16]
#define kCommonMiddleTextFont      [UIFont systemFontOfSize:14]
#define kCommonSmallTextFont       [UIFont systemFontOfSize:12]


//本机像素
#define Scale [UIScreen mainScreen] scale]


#endif /* Const_h */
