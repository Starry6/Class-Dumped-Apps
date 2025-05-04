@interface AWEIMShareLocationPresenterProps : AWEIMUIViewPresenterProps
@property (nonatomic) @? coverTappedActionBlock;
@property (nonatomic) NSString poiName;
@property (nonatomic) NSString poiAddress;
@property (nonatomic) UIImage localImage;
@property (nonatomic) AWEURLModel coverResourceUrl;
- (id)poiName;
- (id)poiAddress;
- (void)setPoiAddress:;
- (void)setPoiName:;
- (id)coverResourceUrl;
- (void)setCoverResourceUrl:;
- (void)setCoverTappedActionBlock:;
- (id)coverTappedActionBlock;
- (void).cxx_destruct;
- (id)localImage;
- (void)setLocalImage:;
@end
