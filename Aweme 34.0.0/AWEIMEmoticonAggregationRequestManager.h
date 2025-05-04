@interface AWEIMEmoticonAggregationRequestManager : HTSService
@property (nonatomic) BOOL didRequestAggregation;
@property (nonatomic) BOOL isFetching;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogoutWithUid:;
- (void)requestEmoticonAggregationIfNeed;
- (void)p_handleResponse:;
- (BOOL)didRequestAggregation;
- (void)p_prepareFetch;
- (id)p_setupTrackersWithScenes:;
- (void)setDidRequestAggregation:;
- (id)init;
- (void)dealloc;
- (BOOL)isFetching;
- (void)setIsFetching:;
+ (id)sharedManager;
@end
