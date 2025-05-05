@interface IESLiveLinkLiveVideoParam : NSObject
@property (nonatomic) q width;
@property (nonatomic) q height;
@property (nonatomic) q fps;
@property (nonatomic) q bitRateKbps;
@property (nonatomic) q gop;
- (void)setGop:;
- (void)setBitRateKbps:;
- (long long)bitRateKbps;
- (long long)gop;
- (id)init;
- (void)setWidth:;
- (long long)height;
- (long long)width;
- (void)setHeight:;
- (long long)fps;
- (void)setFps:;
@end
