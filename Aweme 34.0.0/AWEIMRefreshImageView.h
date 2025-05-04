@interface AWEIMRefreshImageView : UIImageView
@property (nonatomic) NSString URI;
@property (nonatomic) NSString originURL;
@property (nonatomic) NSArray requestImageUrlArray;
- (void)aweimRefreshImage_setImageWithURLArray:URI:placeholder:completion:;
- (void)aweimRefreshImage_setImageWithURLString:placeholder:completion:;
- (BOOL)__needRefreshURLForError:;
- (void)__aweimRefreshImage_setImageWithURLArray:URI:forceRefresh:placeholder:cacheName:transformObject:completion:;
- (id)__refreshStoreKeyForString:;
- (void)__aweimRefreshImage_setImageWithURLString:forceRefresh:placeholder:completion:;
- (void)setRequestImageUrlArray:;
- (id)requestImageUrlArray;
- (void)aweimRefreshImage_setImageWithURLArray:URI:placeholder:cacheName:completion:;
- (void)aweimRefreshImage_setImageWithURLArray:URI:placeholder:cacheName:transformObject:completion:;
- (void)setURI:;
- (id)URI;
- (void).cxx_destruct;
- (id)originURL;
- (void)setOriginURL:;
@end
