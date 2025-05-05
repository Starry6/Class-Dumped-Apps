@interface YYFrameImage : UIImage
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)animatedImageBytesPerFrame;
- (double)animatedImageDurationAtIndex:;
- (id)animatedImageFrameAtIndex:;
- (unsigned long long)animatedImageFrameCount;
- (unsigned long long)animatedImageLoopCount;
- (id)initWithImageDataArray:frameDurations:loopCount:;
- (id)initWithImageDataArray:oneFrameDuration:loopCount:;
- (id)initWithImagePaths:frameDurations:loopCount:;
- (id)initWithImagePaths:oneFrameDuration:loopCount:;
- (void).cxx_destruct;
@end
