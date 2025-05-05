@interface FBApplicationTerminationAssertion : NSObject
@property (nonatomic) NSString bundleID;
@property (nonatomic) NSString reason;
@property (nonatomic) Q serialNumber;
@property (nonatomic) @ plugInHoldToken;
- (unsigned long long)serialNumber;
- (void)setSerialNumber:;
- (id)reason;
- (unsigned long long)hash;
- (void)setPlugInHoldToken:;
- (void)setReason:;
- (void).cxx_destruct;
- (id)description;
- (id)bundleID;
- (id)plugInHoldToken;
- (BOOL)isEqual:;
- (void)setBundleID:;
@end
