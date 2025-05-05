@interface DMFApplicationInstallProgress : NSObject
@property (nonatomic) Q state;
@property (nonatomic) Q phase;
@property (nonatomic) double fractionCompleted;
- (unsigned long long)phase;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (double)fractionCompleted;
- (unsigned long long)state;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithState:phase:fractionCompleted:;
+ (BOOL)supportsSecureCoding;
@end
