//
//  CA_HSearchReportViewManager.h
//  InvestNote_iOS
//
//  Created by 韩云智 on 2018/5/18.
//  Copyright © 2018年 韩云智. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CA_HSearchReportViewManager : NSObject

@property (nonatomic, strong) UITextField *titleView;

- (UIBarButtonItem *)rightBarButtonItem:(id)target action:(SEL)action;

@property (nonatomic, strong) UITableView *tableView;

- (UITableViewHeaderFooterView *)searchHeader:(NSString *)text;

@property (nonatomic, strong) UIView *buttonView;
@property (nonatomic, copy) void (^chooseBlock)(NSInteger item);

@end
