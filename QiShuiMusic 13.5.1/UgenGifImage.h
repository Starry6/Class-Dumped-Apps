@interface UgenGifImage : UIImage
@property (nonatomic) q currentPlayIndex;
@property (nonatomic) NSData data;
- (long long)currentPlayIndex;
- (BOOL)hasNextImage;
- (id)initGifWithData:;
- (void)setCurrentPlayIndex:;
- (void)dealloc;
- (id)data;
- (void)resumeIndex;
- (void).cxx_destruct;
- (void)setData:;
- (long long)count;
- (double)frameDuration;
- (id)nextImage;
+ (id)gifWithData:;
@end
