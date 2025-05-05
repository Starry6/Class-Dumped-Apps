@interface HTSLivePrecisionMatchMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) HTSLivePrecisionMatch precisionMatch;
@property (nonatomic) BOOL hasPrecisionMatch;
+ (id)descriptor;
@end
