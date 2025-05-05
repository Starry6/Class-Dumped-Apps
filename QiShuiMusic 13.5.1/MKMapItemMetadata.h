@interface MKMapItemMetadata : NSObject
@property (nonatomic) NSMutableDictionary imageCache;
@property (nonatomic) GEOBusiness business;
- (id)imageCache;
- (void)setImageCache:;
- (void).cxx_destruct;
- (id)description;
- (id)business;
- (id)initWithBusiness:;
- (void)addImage:forURL:;
- (id)imageForURL:;
@end
