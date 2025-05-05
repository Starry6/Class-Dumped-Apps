@interface BUGifImage : UIImage
@property (nonatomic) q currentPlayIndex;
@property (nonatomic) NSData data;
@property (nonatomic) NSString url;
- (long long)currentPlayIndex;
- (BOOL)hasNextImage;
- (id)initGifWithData:;
- (void)setCurrentPlayIndex:;
- (id)url;
- (void)dealloc;
- (id)data;
- (void)resumeIndex;
- (void)setUrl:;
- (void).cxx_destruct;
- (void)setData:;
- (long long)count;
- (BOOL)isEqual:;
- (double)frameDuration;
- (id)nextImage;
+ (id)gifWithData:;
@end
