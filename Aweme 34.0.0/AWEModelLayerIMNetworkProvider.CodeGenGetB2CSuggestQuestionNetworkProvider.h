@interface AWEModelLayerIMNetworkProvider.CodeGenGetB2CSuggestQuestionNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider
@property (nonatomic) NSNumber bUid;
@property (nonatomic) NSString enterConversationExt;
@property (nonatomic) NSString adTitle;
- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (id)bUid;
- (void)setBUid:;
- (id)enterConversationExt;
- (void)setEnterConversationExt:;
- (id)adTitle;
- (void)setAdTitle:;
- (id)initWithEnterConversationExt:adTitle:bUid:;
- (id)init;
- (void).cxx_destruct;
- (Class)modelClass;
+ (id)businessURI;
@end
