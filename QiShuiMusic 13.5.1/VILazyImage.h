@interface VILazyImage : NSObject
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
- (void).cxx_destruct;
- (BOOL)isLoaded;
- (id)_image;
- (id)initWithImageLoader:imageSize:;
- (id)initWithImageLoader:;
- (void)_loadImageIfPossible;
@end
