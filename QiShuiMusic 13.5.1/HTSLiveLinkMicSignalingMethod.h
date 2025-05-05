@interface HTSLiveLinkMicSignalingMethod : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSString content;
+ (id)descriptor;
@end
