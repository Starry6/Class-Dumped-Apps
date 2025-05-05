@interface IESLiveEmojiDecoderPool : NSObject
@property (nonatomic) NSCache webpDecoders;
- (id)decoderForUrl:;
- (void)setWebpDecoders:;
- (id)webpDecoders;
- (id)init;
- (void).cxx_destruct;
- (void)clean;
@end
