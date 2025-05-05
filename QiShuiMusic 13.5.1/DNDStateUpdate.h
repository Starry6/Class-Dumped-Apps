@interface DNDStateUpdate : NSObject
@property (nonatomic) DNDState previousState;
@property (nonatomic) DNDState state;
@property (nonatomic) Q reason;
@property (nonatomic) q source;
@property (nonatomic) q options;
- (unsigned long long)reason;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (long long)options;
- (id)state;
- (void).cxx_destruct;
- (long long)source;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)previousState;
- (id)initWithPreviousState:state:reason:source:options:;
+ (BOOL)supportsSecureCoding;
@end
