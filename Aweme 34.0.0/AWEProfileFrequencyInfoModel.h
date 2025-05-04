@interface AWEProfileFrequencyInfoModel : AWEBaseApiModel
@property (nonatomic) BOOL useNew;
@property (nonatomic) AWEProfilePromptModel nickNamePrompt;
@property (nonatomic) AWEProfilePromptModel uniqueIDPrompt;
@property (nonatomic) AWEProfilePromptModel protectNicknamePrompt;
@property (nonatomic) AWEProtectedNicknameModel protectNickname;
- (BOOL)useNew;
- (void)setUseNew:;
- (id)protectNickname;
- (void)setProtectNickname:;
- (id)nickNamePrompt;
- (void)setNickNamePrompt:;
- (id)uniqueIDPrompt;
- (void)setUniqueIDPrompt:;
- (id)protectNicknamePrompt;
- (void)setProtectNicknamePrompt:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
