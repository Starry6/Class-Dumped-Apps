@interface HTSLiveClientFallbackDynamicMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
+ (id)descriptor;
@end
