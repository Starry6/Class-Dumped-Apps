@interface AWEModelLayerFriendsNetworkProvider.CodeGenV1MateApplyDeleteNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider
@property (nonatomic) NSNumber userId;
@property (nonatomic) NSString mateApplyId;
- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (id)mateApplyId;
- (void)setMateApplyId:;
- (id)init;
- (id)userId;
- (void).cxx_destruct;
- (void)setUserId:;
- (Class)modelClass;
+ (id)businessURI;
@end
