@interface IESLiveCommentWidgetReplyTipFactory : NSObject
@property (nonatomic) <HTSLiveTemplateProviderAdapter> templateProvider;
@property (nonatomic) HTSLiveTemplateEngineConfiguration templateEngineConfig;
@property (nonatomic) IESLiveEmojiTextParser emoticonParser;
@property (nonatomic) NSMutableDictionary attributes;
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) HTSLiveText displayText;
@property (nonatomic) NSString content;
- (void)appendContentTo:withContent:;
- (void)appendContentTo:withDisplayText:;
- (void)appendTitleTo:withUser:;
- (id)createAttributedStringWith:;
- (id)emoticonParser;
- (id)initWithDIContext:;
- (void)setEmoticonParser:;
- (void)setTemplateEngineConfig:;
- (id)templateEngineConfig;
- (void)setUser:;
- (id)content;
- (void)setContent:;
- (void)setAttributes:;
- (id)attributes;
- (id)displayText;
- (id)user;
- (void).cxx_destruct;
- (void)setDisplayText:;
- (id)templateProvider;
- (void)setTemplateProvider:;
@end
