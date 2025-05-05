@interface VCMediaNegotiatorResultsMoments : NSObject
@property (nonatomic) I capabilities;
@property (nonatomic) NSInteger imageType;
@property (nonatomic) NSInteger videoCodec;
- (int)imageType;
- (void)setCapabilities:;
- (unsigned int)capabilities;
- (void)setVideoCodec:;
- (void)setImageType:;
- (int)videoCodec;
@end
