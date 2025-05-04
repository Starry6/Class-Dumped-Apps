@interface AWESearchMidDCResponse : NSObject
@property (nonatomic) NSString dcRequestID;
@property (nonatomic) BOOL isPrefetch;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSArray dcFeedListModelArray;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dcFeedListModelArray;
- (void)setDcFeedListModelArray:;
- (void)setIsPrefetch:;
- (id)dcRequestID;
- (void)setDcRequestID:;
- (id)requestID;
- (void)setRequestID:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (BOOL)isPrefetch;
@end
