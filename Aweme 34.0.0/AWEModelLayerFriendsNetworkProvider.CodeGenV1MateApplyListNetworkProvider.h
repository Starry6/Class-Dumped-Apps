@interface AWEModelLayerFriendsNetworkProvider.CodeGenV1MateApplyListNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider
@property (nonatomic) NSNumber isRefresh;
@property (nonatomic) NSNumber maxTimestamp;
@property (nonatomic) NSNumber minTimestamp;
@property (nonatomic) NSNumber count;
- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (id)init;
- (void)setCount:;
- (id)isRefresh;
- (id)count;
- (void).cxx_destruct;
- (Class)modelClass;
- (void)setIsRefresh:;
- (id)maxTimestamp;
- (void)setMaxTimestamp:;
- (id)minTimestamp;
- (void)setMinTimestamp:;
+ (id)businessURI;
@end
