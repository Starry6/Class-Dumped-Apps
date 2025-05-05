@interface AVExternalDeviceIcon : NSObject
@property (nonatomic) {CGSize=dd} pixelSize;
@property (nonatomic) NSData imageData;
@property (nonatomic) BOOL prerendered;
- (id)pixelSize;
- (void)dealloc;
- (id)imageData;
- (id)initWithDictionary:;
- (BOOL)isPrerendered;
@end
