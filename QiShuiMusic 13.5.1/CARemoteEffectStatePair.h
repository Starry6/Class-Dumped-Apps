@interface CARemoteEffectStatePair : NSObject
@property (nonatomic) NSString fromState;
@property (nonatomic) NSString toState;
- (id)fromState;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)toState;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)pairWithFromState:toState:;
@end
