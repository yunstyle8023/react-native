//
//  CA_HNoteInformationViewModel.h
//  InvestNote_iOS
//
//  Created by 韩云智 on 2018/3/15.
//  Copyright © 2018年 韩云智. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "CA_HNoteDetailModel.h"

@interface CA_HNoteInformationViewModel : NSObject

@property (nonatomic, strong) CA_HNoteDetailModel *model;

@property (nonatomic, strong) NSArray<NSString *> *topArray;
@property (nonatomic, strong) NSArray<NSString *> *bottomArray;

@end
