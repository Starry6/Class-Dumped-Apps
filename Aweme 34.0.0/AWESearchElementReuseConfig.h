@interface AWESearchElementReuseConfig : NSObject
@property (nonatomic) q searchVideoPoolSize;
@property (nonatomic) q searchLivePoolSize;
@property (nonatomic) q searchHorizontalPoolSize;
@property (nonatomic) q searchAlbumPoolSize;
- (long long)searchVideoPoolSize;
- (void)setSearchVideoPoolSize:;
- (long long)searchLivePoolSize;
- (void)setSearchLivePoolSize:;
- (long long)searchHorizontalPoolSize;
- (void)setSearchHorizontalPoolSize:;
- (long long)searchAlbumPoolSize;
- (void)setSearchAlbumPoolSize:;
@end
