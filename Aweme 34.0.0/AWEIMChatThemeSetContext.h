@interface AWEIMChatThemeSetContext : NSObject
@property (nonatomic) NSString conversationID;
@property (nonatomic) AWEIMChatBackgroundModel backgroundModel;
@property (nonatomic) BOOL shareToOthers;
@property (nonatomic) NSString themeKey;
@property (nonatomic) NSString from;
@property (nonatomic) NSNumber upgradeHasBackground;
@property (nonatomic) NSNumber upgradeIsCloseFriend;
- (id)themeKey;
- (void)setThemeKey:;
- (void)setBackgroundModel:;
- (void)setShareToOthers:;
- (BOOL)shareToOthers;
- (id)upgradeHasBackground;
- (id)upgradeIsCloseFriend;
- (void)setUpgradeHasBackground:;
- (void)setUpgradeIsCloseFriend:;
- (id)conversationID;
- (void).cxx_destruct;
- (void)setConversationID:;
- (void)setFrom:;
- (id)from;
- (id)initWithConversationID:;
- (id)backgroundModel;
@end
