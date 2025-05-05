@interface WBSSavedAccountMatchResult : NSObject
@property (nonatomic) NSArray exactMatches;
@property (nonatomic) NSArray potentialMatches;
@property (nonatomic) NSArray associatedDomainMatches;
@property (nonatomic) WBSPasskeyAutoFillFromNearbyDeviceOptions nearbyDeviceOptions;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)exactMatches;
- (id)potentialMatches;
- (id)associatedDomainMatches;
- (id)initWithExactMatches:potentialMatches:associatedDomainMatches:nearbyDeviceOptions:;
- (id)matchesForPasswordAutoFill;
- (id)orderedMatches;
- (id)nearbyDeviceOptions;
@end
