@interface VCVideoDecoder : NSObject
@property (nonatomic) ^{tagHANDLE=i} videoPlayerHandle;
- (void)dealloc;
- (id)initWithConfig:;
- (id)videoPlayerHandle;
+ (id)streamTokenDecoderMap;
+ (id)decoderForStreamToken:withConfig:;
+ (void)releaseVideoDecoderForStreamToken:;
@end
