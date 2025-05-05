@interface MKMapItemMetadataImageRequest : MKMapItemMetadataRequest
@property (nonatomic) @? imageHandler;
@property (nonatomic) GEOPhotoInfo info;
- (id)url;
- (void)handleError:;
- (void)setInfo:;
- (void).cxx_destruct;
- (id)info;
- (void)handleData:;
- (id)imageHandler;
- (void)setImageHandler:;
+ (id)requestWithMapItem:info:;
@end
