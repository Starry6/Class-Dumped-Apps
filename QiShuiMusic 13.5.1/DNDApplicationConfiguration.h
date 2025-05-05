@interface DNDApplicationConfiguration : NSObject
@property (nonatomic) Q minimumBreakthroughUrgency;
@property (nonatomic) NSSet allowedThreads;
@property (nonatomic) NSSet deniedThreads;
- (id)init;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (unsigned long long)minimumBreakthroughUrgency;
- (id)description;
- (id)mutableCopyWithZone:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)diffDescription;
- (id)_initWithMinimumBreakthroughUrgency:allowedThreads:deniedThreads:;
- (id)allowedThreads;
- (id)deniedThreads;
+ (BOOL)supportsSecureCoding;
+ (id)defaultConfiguration;
@end
