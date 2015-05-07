//
//  Utils.h
//  investigation
//
//  Created by sungeo on 14/12/4.
//  Copyright (c) 2014年 buddysoft. All rights reserved.
//

#import <Foundation/Foundation.h>

@class UITableView;
@class UIViewController;
@class UIWebView;

@interface Utils : NSObject

// 从Main Storyboard中加载一个UIViewController
+ (id)viewControllerWithIdentifier:(NSString *)identifier;
+ (id)viewControllerwithStoryboard:(NSString *)storyboard withIdentifier:(NSString *)identifier;

// 展示一个UIAlertView
+ (void)warningWithMessage:(NSString *)message;
+ (void)warningWithTitle:(NSString *)title message:(NSString *)message;
+ (void)errorWithMessage:(NSString *)message;

+ (void)hideExtraCellsForTableView:(UITableView *)tableView;

// 自定义导航栏返回按钮的文字
+ (void)customizeBackNavigationItemTitle:(NSString *)title forViewController:(UIViewController *)vc;

/*
 * 将秒数转换为"XX小时XX分XX秒"这样的形式
 */
+ (NSString *)readableTimeFromSeconds:(NSTimeInterval)interval;

+ (void)customizeStatusBarForApplication:(id)application;
+ (void)customizeNavigationBarForApplication:(id)application withColor:(id)color;

/**
 *  加载本地Html页面
 *
 *  @param fileName
 *  @param webView
 */
+ (void)loadHtml:(NSString *)fileName webView:(UIWebView *)webView;

@end
