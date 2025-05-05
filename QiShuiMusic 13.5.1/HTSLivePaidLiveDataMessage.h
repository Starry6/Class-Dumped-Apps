@interface HTSLivePaidLiveDataMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) HTSLivePaidBusinessData paidBusinessData;
@property (nonatomic) BOOL hasPaidBusinessData;
+ (id)descriptor;
@end
