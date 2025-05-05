@interface SILogicalTimestamp : NSObject
@property (nonatomic) NSUUID clockIdentifier;
@property (nonatomic) Q nanoSecondsSinceBoot;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (unsigned long long)nanoSecondsSinceBoot;
- (id)clockIdentifier;
- (id)initWithClockIdentifier:nanosecondsSinceBoot:;
- (id)initWithInternalType:;
- (id)underlying;
@end
