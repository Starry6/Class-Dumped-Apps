@interface AWEFeedDoubleColumnDCResponse : NSObject
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSArray dcFeedListModelArray;
@property (nonatomic) NSString dcResquestID;
@property (nonatomic) BOOL isPrefetch;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dcFeedListModelArray;
- (void)setDcFeedListModelArray:;
- (void)setIsPrefetch:;
- (id)dcResquestID;
- (void)setDcResquestID:;
- (id)requestID;
- (void)setRequestID:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (BOOL)isPrefetch;
@end
