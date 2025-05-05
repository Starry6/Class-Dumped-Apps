@interface IMTranscriptPluginBreadcrumbChatItem : IMTranscriptChatItem
@property (nonatomic) NSString rawStatusText;
@property (nonatomic) IMBalloonPluginDataSource dataSource;
@property (nonatomic) NSString statusText;
@property (nonatomic) Q optionFlags;
@property (nonatomic) NSString type;
@property (nonatomic) BOOL isFromMe;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDataSource:;
- (id)statusText;
- (unsigned long long)hash;
- (id)type;
- (id)dataSource;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (BOOL)isFromMe;
- (unsigned long long)optionFlags;
- (id)_initWithItem:datasource:statusText:optionFlags:;
- (void)configureStatusTextWithAccount:;
- (id)rawStatusText;
@end
