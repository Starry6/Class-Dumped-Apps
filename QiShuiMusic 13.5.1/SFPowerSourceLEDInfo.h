@interface SFPowerSourceLEDInfo : NSObject
@property (nonatomic) NSInteger LEDColor;
@property (nonatomic) NSInteger LEDState;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (int)LEDColor;
- (void)setLEDColor:;
- (int)LEDState;
- (void)setLEDState:;
+ (BOOL)supportsSecureCoding;
@end
