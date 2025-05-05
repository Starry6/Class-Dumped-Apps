@interface SALocalSearchAceNavigationEta : AceObject
@property (nonatomic) SADistance distanceEta;
@property (nonatomic) SADuration timeEta;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)distanceEta;
- (void)setDistanceEta:;
- (id)timeEta;
- (void)setTimeEta:;
+ (id)aceNavigationEta;
+ (id)aceNavigationEtaWithDictionary:context:;
@end
