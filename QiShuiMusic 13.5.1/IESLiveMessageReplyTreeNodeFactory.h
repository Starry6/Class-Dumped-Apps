@interface IESLiveMessageReplyTreeNodeFactory : NSObject
@property (nonatomic) <HTSLiveTemplateProviderAdapter> templateProvider;
@property (nonatomic) HTSLiveTemplateEngineConfiguration templateEngineConfig;
@property (nonatomic) IESLiveEmojiTextParserAdapter emoticonParser;
@property (nonatomic) IESLiveBadgeFactory badgeFactory;
@property (nonatomic) NSMutableDictionary userAttributes;
- (void)updateAttributedTextOfTreeNode:;
- (id)createReplyTreeNodeWithMessage:;
- (void)appendBadgeTo:withUser:;
- (void)appendContentTo:withContent:;
- (id)appendContentTo:withDisplayText:;
- (void)appendTitleTo:withUser:;
- (id)badgeFactory;
- (id)createReplyTreeNodeWithNode:;
- (id)createReplyTreeNodesWithMessages:;
- (id)emoticonParser;
- (id)initWithDIContext:;
- (void)setBadgeFactory:;
- (void)setEmoticonParser:;
- (void)setTemplateEngineConfig:;
- (void)setUserAttributes:;
- (id)templateEngineConfig;
- (id)userAttributes;
- (void).cxx_destruct;
- (id)templateProvider;
- (void)setTemplateProvider:;
@end
