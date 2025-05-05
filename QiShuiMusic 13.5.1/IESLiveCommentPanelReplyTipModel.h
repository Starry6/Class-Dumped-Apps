@interface IESLiveCommentPanelReplyTipModel : NSObject
@property (nonatomic) BOOL isValid;
@property (nonatomic) q repliedMessageId;
@property (nonatomic) NSString method;
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) HTSLiveText displayText;
@property (nonatomic) NSString content;
@property (nonatomic) NSString triggerType;
- (id)initWithMessageId:message:;
- (id)initWithMessageId:method:user:displayText:content:;
- (BOOL)isValidReply;
- (long long)repliedMessageId;
- (void)setRepliedMessageId:;
- (void)updateInfoWithMessage:;
- (void)setUser:;
- (id)content;
- (void)setContent:;
- (void)setIsValid:;
- (id)method;
- (id)displayText;
- (id)user;
- (id)triggerType;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)setMethod:;
- (void)setDisplayText:;
- (void)setTriggerType:;
@end
