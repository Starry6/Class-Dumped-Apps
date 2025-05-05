@interface SFUnlockState : NSObject
@property (nonatomic) NSNumber unlockEnabled;
@property (nonatomic) NSNumber remotePasscodeEnabled;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)unlockEnabled;
- (id)initWithUnlockEnabled:remotePasscodeEnabled:;
- (id)remotePasscodeEnabled;
+ (BOOL)supportsSecureCoding;
@end
