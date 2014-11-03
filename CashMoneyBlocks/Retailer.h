//
//  RetailerCustomization.h
//  CashMoneyBlocks
//
//  Created by Zachary Drossman on 10/31/14.
//  Copyright (c) 2014 Zachary Drossman. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CashRegister.h"

@interface Retailer : NSObject

- (void)customizeRegisterLogic:(CashRegister *)cashRegister;
- (NSArray *)generateTransactionData;

@end
