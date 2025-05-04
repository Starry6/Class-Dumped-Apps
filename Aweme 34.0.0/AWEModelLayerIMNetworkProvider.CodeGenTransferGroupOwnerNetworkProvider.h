@interface AWEModelLayerIMNetworkProvider.CodeGenTransferGroupOwnerNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider
@property (nonatomic) NSNumber conversationShortId;
@property (nonatomic) NSNumber toUserId;
- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (id)conversationShortId;
- (void)setConversationShortId:;
- (id)toUserId;
- (void)setToUserId:;
- (id)initToUserId:conversationShortId:;
- (id)init;
- (void).cxx_destruct;
- (Class)modelClass;
+ (id)businessURI;
@end
