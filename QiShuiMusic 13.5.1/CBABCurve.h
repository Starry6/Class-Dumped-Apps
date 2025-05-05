@interface CBABCurve : NSObject
@property (nonatomic) Q version;
@property (nonatomic) float scaleFactor;
- (id)initWithUUID:;
- (id)init;
- (float)scaleFactor;
- (unsigned long long)version;
- (void)setScaleFactor:;
- (id)description;
- (id)initWithConfiguration:;
- (BOOL)setLux:;
- (id)initWithUUID:vendorID:andProductID:;
- (void)setLinearBrightnessMin:andMax:;
- (float)getLux;
- (float)getLinearBrightness;
- (float)getScaledBL1;
- (float)getScaledBL2;
- (void)setScaledBL1:;
- (void)setScaledBL2:;
- (void)updateALSParametersForDisplayBrightness:;
- (void)resetToDefaultState;
- (id)copyUserPrefState;
- (void)setSavedPrefences:;
@end
