@interface AWEModelLayerNoticeNetworkProvider.CodeGenV1NoticeAggregationNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider
@property (nonatomic) NSNumber maxTime;
@property (nonatomic) NSNumber minTime;
@property (nonatomic) NSNumber count;
@property (nonatomic) NSNumber noticeId;
- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (id)noticeId;
- (void)setNoticeId:;
- (id)initWithNoticeId:maxTime:count:minTime:;
- (id)init;
- (void)setMaxTime:;
- (void)setCount:;
- (void)setMinTime:;
- (id)maxTime;
- (id)minTime;
- (id)count;
- (void).cxx_destruct;
- (Class)modelClass;
+ (id)businessURI;
@end
