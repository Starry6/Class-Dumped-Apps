@interface BKSHIDEventDeferringPredicate : NSObject
@property (nonatomic) BKSHIDEventDeferringEnvironment environment;
@property (nonatomic) BKSHIDEventDisplay display;
@property (nonatomic) BKSHIDEventDeferringToken token;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)token;
- (id)display;
- (id)_initWithEnvironment:display:token:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)environment;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (void)appendDescriptionToFormatter:;
- (id)mutableCopyWithZone:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
