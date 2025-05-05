@interface WFGetDirectionsContextualAction : WFContextualAction
@property (nonatomic) CLLocation destination;
@property (nonatomic) NSString destinationName;
@property (nonatomic) Q navigationType;
- (id)uniqueIdentifier;
- (id)destination;
- (unsigned long long)navigationType;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)destinationName;
- (BOOL)showsUserInterfaceWhenRunning;
- (id)initWithDestination:name:type:;
+ (BOOL)supportsSecureCoding;
@end
