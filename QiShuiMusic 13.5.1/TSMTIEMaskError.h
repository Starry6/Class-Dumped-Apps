@interface TSMTIEMaskError : NSObject
@property (nonatomic) double observationInterval;
@property (nonatomic) double mask;
@property (nonatomic) double mtie;
- (double)mask;
- (void)setMask:;
- (id)description;
- (double)observationInterval;
- (double)mtie;
- (void)setObservationInterval:;
- (void)setMtie:;
@end
