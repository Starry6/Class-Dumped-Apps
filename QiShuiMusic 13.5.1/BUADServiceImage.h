@interface BUADServiceImage : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)BU_ImageLoaderDecodeImageData:withURLString:;
- (id)adServiceVersion;
- (id)cloneInstance:;
- (id)encodedDataWithImage:;
- (id)imageFromCacheForURL:;
- (void)loadGifImageWithImageViewTarget:placeholder:imageWithURL:completed:;
- (id)loadImageWithURL:completed:;
- (void)setDynamicImageViewTarget:placeholder:url:completed:;
- (void)setImageViewTarget:imageWithURL:completed:;
- (void)setImageViewTarget:placeholder:imageWithURL:completed:;
- (void)setMaxMemoryCost:;
- (void)setMaxMemoryCount:;
@end
