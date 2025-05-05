@interface CNPolicyDescription : NSObject
@property (nonatomic) NSString containerIdentifier;
@property (nonatomic) BOOL ignoresGuardianRestrictions;
- (id)containerIdentifier;
- (void).cxx_destruct;
- (void)setContainerIdentifier:;
- (BOOL)ignoresGuardianRestrictions;
- (void)setIgnoresGuardianRestrictions:;
@end
