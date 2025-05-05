@interface CARManufacturerIcon : NSObject
@property (nonatomic) {CGSize=dd} pixelSize;
@property (nonatomic) NSData imageData;
@property (nonatomic) BOOL prerendered;
- (id)pixelSize;
- (id)imageData;
- (id)initWithDictionary:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isPrerendered;
@end
