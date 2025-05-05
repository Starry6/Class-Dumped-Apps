@interface IESLiveEffectPlayerVideoModel : NSObject
@property (nonatomic) {CGSize=dd} originSizeOfRGBChannels;
@property (nonatomic) {CGSize=dd} originSizeOfAlphaChannels;
@property (nonatomic) NSDictionary layers;
- (id)originSizeOfAlphaChannels;
- (id)originSizeOfRGBChannels;
- (void)setOriginSizeOfAlphaChannels:;
- (void)setOriginSizeOfRGBChannels:;
- (id)layers;
- (void).cxx_destruct;
- (void)setLayers:;
@end
