@interface MRAudioFadeResponseMessage : MRProtocolMessage
@property (nonatomic) q fadeDuration;
- (unsigned long long)type;
- (long long)fadeDuration;
- (id)initWithFadeDuration:error:;
@end
