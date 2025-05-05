@interface AWEIMRefreshImageView : UIImageView
@property (nonatomic) NSString URI;
@property (nonatomic) NSString originURL;
- (void)aweimRefreshImage_setImageWithURLString:placeholder:completion:;
- (void)__aweimRefreshImage_setImageWithURLArray:URI:forceRefresh:placeholder:completion:;
- (void)__aweimRefreshImage_setImageWithURLString:forceRefresh:placeholder:completion:;
- (BOOL)__needRefreshURLForError:;
- (id)__refreshStoreKeyForString:;
- (void)aweimRefreshImage_setImageWithURLArray:URI:placeholder:completion:;
- (id)URI;
- (void)setURI:;
- (void).cxx_destruct;
- (id)originURL;
- (void)setOriginURL:;
@end
