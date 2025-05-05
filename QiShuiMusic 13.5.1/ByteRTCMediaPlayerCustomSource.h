@interface ByteRTCMediaPlayerCustomSource : NSObject
@property (nonatomic) <ByteRTCMediaPlayerCustomSourceProvider> provider;
@property (nonatomic) q mode;
@property (nonatomic) q type;
- (void)setProvider:;
- (id)init;
- (void)setType:;
- (id)provider;
- (long long)type;
- (void).cxx_destruct;
- (long long)mode;
- (void)setMode:;
@end
