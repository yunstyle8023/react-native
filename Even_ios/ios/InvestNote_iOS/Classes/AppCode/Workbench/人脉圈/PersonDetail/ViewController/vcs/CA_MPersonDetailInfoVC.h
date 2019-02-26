//
//  CA_MPersonDetailInfoVC.h
//  InvestNote_iOS
//
//  Created by 野猪哥 on 2018/3/13.
//  Copyright © 2018年 韩云智. All rights reserved.
//

#import "CA_MPersonDetailCommonVC.h"
#import "CA_MPersonDetailModel.h"
#import "CA_MPersonModel.h"


@interface CA_MPersonDetailInfoVC : CA_MPersonDetailCommonVC
@property (nonatomic,strong) NSNumber *humanID;
@property (nonatomic,copy) void(^block)(CA_MPersonDetailModel* detailModel);
@end
