@interface AWEEcomImageSearchRequestContext : NSObject
@property (nonatomic) NSString channel;
@property (nonatomic) BOOL loadMore;
- (BOOL)isLoadMore;
- (void)setLoadMore:;
- (id)channel;
- (void)setChannel:;
- (void).cxx_destruct;
+ (id)contextWithChannel:loadMore:;
@end
