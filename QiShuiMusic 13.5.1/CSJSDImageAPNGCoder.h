@interface CSJSDImageAPNGCoder : CSJSDImageIOAnimatedCoder
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSData animatedImageData;
@property (nonatomic) Q animatedImageFrameCount;
@property (nonatomic) Q animatedImageLoopCount;
+ (unsigned long long)defaultLoopCount;
+ (id)delayTimeProperty;
+ (id)dictionaryProperty;
+ (id)imageUTType;
+ (id)loopCountProperty;
+ (id)sharedCoder;
+ (id)unclampedDelayTimeProperty;
+ (long long)imageFormat;
@end
