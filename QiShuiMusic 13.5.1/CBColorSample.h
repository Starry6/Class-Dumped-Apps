@interface CBColorSample : NSObject
@property (nonatomic) double lux;
@property (nonatomic) {?=dd} xy;
@property (nonatomic) {?=ddd} XYZ;
@property (nonatomic) {?=ddd} Lab;
@property (nonatomic) double CCT;
@property (nonatomic) q colorBin;
@property (nonatomic) Q mode;
@property (nonatomic) Q type;
- (id)init;
- (void)setType:;
- (unsigned long long)type;
- (id)description;
- (unsigned long long)mode;
- (void)setMode:;
- (double)lux;
- (id)initWithHIDEvent:;
- (id)copyDataInDictionary;
- (double)CCT;
- (id)initWithTristimulus:illuminance:andTempterature:;
- (id)initWithChromaticity:illuminance:andTempterature:;
- (void)setXy:;
- (void)setXYZ:;
- (void)fillInChromaticity;
- (void)fillInTristimulus;
- (id)Lab;
- (double)colorDeltaEWith:;
- (double)CCTDifferenceWith:;
- (double)LuxDifferenceWith:;
- (long long)colorBin;
- (id)xy;
- (id)XYZ;
@end
