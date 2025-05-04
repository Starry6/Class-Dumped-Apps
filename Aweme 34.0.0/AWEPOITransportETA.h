@interface AWEPOITransportETA : NSObject
@property (nonatomic) q transportType;
@property (nonatomic) NSString eta;
@property (nonatomic) double duration;
- (id)initWithType:ETA:duration:;
- (long long)transportType;
- (void)setTransportType:;
- (void)setDuration:;
- (void).cxx_destruct;
- (double)duration;
- (id)eta;
- (void)setEta:;
@end
