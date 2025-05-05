@interface VIImage : NSObject
@property (nonatomic) ^{__CVBuffer=} pixelBuffer;
@property (nonatomic) I orientation;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)pixelBuffer;
- (unsigned int)orientation;
- (id)imageSize;
- (BOOL)isLoaded;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithPixelBuffer:orientation:;
+ (id)imageWithPixelBuffer:orientation:;
@end
