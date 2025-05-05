@interface SASProximityHandshake : NSObject
@property (nonatomic) q platformType;
@property (nonatomic) BOOL hasPasscodeSet;
@property (nonatomic) NSInteger simplePasscodeType;
@property (nonatomic) NSInteger unlockType;
- (BOOL)hasPasscodeSet;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)platformType;
- (void)setPlatformType:;
- (void)setHasPasscodeSet:;
- (void)loadInformation;
- (int)simplePasscodeType;
- (void)setSimplePasscodeType:;
- (int)unlockType;
- (void)setUnlockType:;
+ (BOOL)supportsSecureCoding;
@end
