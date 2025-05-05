@interface BDTrackBatchData : NSObject
@property (nonatomic) NSDictionary header;
@property (nonatomic) NSMutableDictionary data;
@property (nonatomic) Q limitSize;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL limited;
- (id)initWithPriority:from:;
- (unsigned long long)limitSize;
- (void)setLimitSize:;
- (void)setHeader:;
- (id)data;
- (void)setHasMore:;
- (void).cxx_destruct;
- (BOOL)hasMore;
- (void)setData:;
- (id)header;
- (void)setLimited:;
- (BOOL)limited;
@end
