//
//  LobServiceModel.h
//  lob-ios
//
//  Created by Zealous Amoeba on 1/3/14.
//  www.zealousamoeba.org
//  Copyright (c) 2014 Lob. All rights reserved.
//

#import "LobAbstractModel.h"

@interface LobServiceModel : LobAbstractModel
@property(nonatomic, strong) NSString *serviceId;
@property(nonatomic, strong) NSString *name;
@property(nonatomic, strong, getter=serviceDescription) NSString *description;

- (instancetype)initServiceWithId:(NSString*)serviceId;

- (instancetype)initServiceWithName:(NSString*)name
                        description:(NSString*)description;

@end
