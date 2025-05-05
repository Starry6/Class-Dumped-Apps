@interface AWEIMGroupShareCommandTokenProvider : NSObject
@property (nonatomic) AWEIMMessageConversation conversation;
@property (nonatomic) q shareType;
@property (nonatomic) NSString token;
@property (nonatomic) double expireTime;
@property (nonatomic) NSString lastItemID;
@property (nonatomic) BOOL isGeneralPanel;
@property (nonatomic) NSString pasteDescription;
- (id)initWithConversation:shareType:;
- (id)initWithShareData:conversation:;
- (id)tokenDateString;
- (void)fetchDataWithCompletion:;
- (BOOL)isGeneralPanel;
- (id)lastItemID;
- (id)pasteDescription;
- (void)setIsGeneralPanel:;
- (void)setLastItemID:;
- (void)setPasteDescription:;
- (id)token;
- (id)conversation;
- (void)setToken:;
- (void).cxx_destruct;
- (double)expireTime;
- (void)setExpireTime:;
- (void)setConversation:;
- (void)setShareType:;
- (long long)shareType;
@end
