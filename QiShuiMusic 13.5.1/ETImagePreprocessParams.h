@interface ETImagePreprocessParams : NSObject
@property (nonatomic) BOOL network_wants_bgr;
@property (nonatomic) float bias_r;
@property (nonatomic) float bias_g;
@property (nonatomic) float bias_b;
@property (nonatomic) float scale;
@property (nonatomic) Q channels;
@property (nonatomic) Q height;
@property (nonatomic) Q width;
- (unsigned long long)channels;
- (unsigned long long)height;
- (unsigned long long)width;
- (float)scale;
- (id)initWithHeight:Width:NumChannels:Scale:BiasR:BiasG:BiasB:NetworkWantBGR:;
- (BOOL)network_wants_bgr;
- (float)bias_r;
- (float)bias_g;
- (float)bias_b;
@end
