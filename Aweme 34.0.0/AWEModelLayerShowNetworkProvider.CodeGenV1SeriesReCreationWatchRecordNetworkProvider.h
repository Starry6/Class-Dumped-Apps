@interface AWEModelLayerShowNetworkProvider.CodeGenV1SeriesReCreationWatchRecordNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider
@property (nonatomic) NSString reCreationItemId;
@property (nonatomic) NSNumber watchedProgress;
@property (nonatomic) NSNumber tagId;
- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (id)reCreationItemId;
- (void)setReCreationItemId:;
- (id)watchedProgress;
- (void)setWatchedProgress:;
- (id)init;
- (void).cxx_destruct;
- (void)setTagId:;
- (Class)modelClass;
- (id)tagId;
+ (id)businessURI;
@end
