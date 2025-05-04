@interface AWELiveWebPDecoder : NSObject
@property (nonatomic) AWELiveWebImage bdImage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bdImage;
- (void)setBdImage:;
- (id)image;
- (BOOL)isAnimatedImage;
- (id)initWithData:scale:;
- (void).cxx_destruct;
- (long long)frameCount;
- (id)animatedImage;
- (id)frameAtIndex:;
@end
