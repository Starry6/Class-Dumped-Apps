@interface HTSLiveMagicGestureActivityMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSInteger status;
@property (nonatomic) NSString effectId;
@property (nonatomic) NSInteger actionType;
@property (nonatomic) NSString actionSchema;
@property (nonatomic) NSString bizId;
+ (id)descriptor;
@end
