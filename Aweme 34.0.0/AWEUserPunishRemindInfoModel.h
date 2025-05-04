@interface AWEUserPunishRemindInfoModel : AWEBaseApiModel
@property (nonatomic) BOOL isPunish;
@property (nonatomic) Q punishBanType;
@property (nonatomic) AWEUserPunishLinkContent promptBar;
@property (nonatomic) NSString punishTitle;
@property (nonatomic) AWEURLModel punishIcon;
@property (nonatomic) AWEURLModel punishIconDark;
@property (nonatomic) AWEUserPunishLinkContent punishContent;
- (id)punishTitle;
- (id)punishContent;
- (BOOL)isPunish;
- (void)setIsPunish:;
- (unsigned long long)punishBanType;
- (void)setPunishBanType:;
- (id)promptBar;
- (void)setPromptBar:;
- (void)setPunishTitle:;
- (id)punishIcon;
- (void)setPunishIcon:;
- (id)punishIconDark;
- (void)setPunishIconDark:;
- (void)setPunishContent:;
- (void).cxx_destruct;
+ (id)punishIconJSONTransformer;
+ (id)punishIconDarkJSONTransformer;
+ (id)promptBarJSONTransformer;
+ (id)punishContentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
