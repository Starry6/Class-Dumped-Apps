@interface FMDEraseOptions : NSObject
@property (nonatomic) BOOL useObliteration;
@property (nonatomic) BOOL brickDevice;
@property (nonatomic) double customDelay;
@property (nonatomic) double maxDelayInterval;
@property (nonatomic) BOOL hasBridgeCoProcessor;
- (id)initWithCoder:;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (BOOL)useObliteration;
- (void)setUseObliteration:;
- (BOOL)brickDevice;
- (void)setBrickDevice:;
- (double)customDelay;
- (void)setCustomDelay:;
- (double)maxDelayInterval;
- (void)setMaxDelayInterval:;
- (BOOL)hasBridgeCoProcessor;
- (void)setHasBridgeCoProcessor:;
+ (BOOL)supportsSecureCoding;
@end
