@interface IMTypingPluginChatItem : IMTypingChatItem
@property (nonatomic) IMBalloonPluginDataSource dataSource;
@property (nonatomic) NSData typingIndicatorIcon;
@property (nonatomic) NSString type;
@property (nonatomic) BOOL isFromMe;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDataSource:;
- (id)type;
- (id)dataSource;
- (void).cxx_destruct;
- (id)typingIndicatorIcon;
- (id)_initWithItem:dataSource:;
@end
