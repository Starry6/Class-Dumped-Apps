@interface YYSpriteSheetImage : UIImage
@property (nonatomic) NSArray contentRects;
@property (nonatomic) NSArray frameDurations;
@property (nonatomic) Q loopCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithSpriteSheetImage:contentRects:frameDurations:loopCount:;
- (unsigned long long)animatedImageBytesPerFrame;
- (id)animatedImageContentsRectAtIndex:;
- (double)animatedImageDurationAtIndex:;
- (id)animatedImageFrameAtIndex:;
- (unsigned long long)animatedImageFrameCount;
- (unsigned long long)animatedImageLoopCount;
- (id)contentsRectForCALayerAtIndex:;
- (id)frameDurations;
- (void).cxx_destruct;
- (unsigned long long)loopCount;
- (id)contentRects;
@end
