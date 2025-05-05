@interface AWEIMAlbumModel : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) PHFetchResult assets;
- (id)initWithAssets:title:;
- (id)assets;
- (void)setTitle:;
- (void)setAssets:;
- (id)title;
- (void).cxx_destruct;
@end
