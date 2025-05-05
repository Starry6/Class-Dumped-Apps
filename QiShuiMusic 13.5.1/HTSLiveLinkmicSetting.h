@interface HTSLiveLinkmicSetting : IESLivePBBaseMessage
@property (nonatomic) NSInteger key;
@property (nonatomic) NSInteger value;
@property (nonatomic) HTSLiveSettingContent content;
@property (nonatomic) BOOL hasContent;
+ (id)descriptor;
@end
