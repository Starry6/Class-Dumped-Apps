@interface HTSLiveLinkmicAudienceSetting : IESLivePBBaseMessage
@property (nonatomic) NSInteger key;
@property (nonatomic) HTSLiveLinkmicAudienceSettingValue value;
@property (nonatomic) BOOL hasValue;
+ (id)descriptor;
@end
