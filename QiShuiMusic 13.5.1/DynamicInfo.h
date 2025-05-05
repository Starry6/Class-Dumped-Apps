@interface DynamicInfo : IESLivePBBaseMessage
@property (nonatomic) q showAfterTimeMs;
@property (nonatomic) HTSLiveText text;
@property (nonatomic) BOOL hasText;
@property (nonatomic) q durationMs;
+ (id)descriptor;
@end
