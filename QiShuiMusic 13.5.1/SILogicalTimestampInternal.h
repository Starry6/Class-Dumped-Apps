@interface SILogicalTimestampInternal : NSObject
@property (nonatomic) NSUUID clockIdentifier;
@property (nonatomic) Q nanosecondsSinceBoot;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)clockIdentifier;
- (id)initWithClockIdentifier:nanosecondsSinceBoot:;
- (unsigned long long)nanosecondsSinceBoot;
@end
