@interface AWEDicoverySearchManager : NSObject
@property (nonatomic) NSNumber cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSDictionary logPassback;
- (id)logPassback;
- (void)setLogPassback:;
- (void)searchUserWithKeyword:source:completion:;
- (void)searchUserWithKeyword:completion:;
- (id)cursor;
- (id)init;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
- (void)reset;
@end
