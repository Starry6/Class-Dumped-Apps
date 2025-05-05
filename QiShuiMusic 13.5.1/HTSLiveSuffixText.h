@interface HTSLiveSuffixText : IESLivePBBaseMessage
@property (nonatomic) q bizType;
@property (nonatomic) HTSLiveText text;
@property (nonatomic) BOOL hasText;
+ (id)descriptor;
@end
