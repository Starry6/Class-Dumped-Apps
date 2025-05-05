@interface SALocalSearchNavigationPromptManeuver : SADomainCommand
@property (nonatomic) NSNumber maneuverIndex;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)maneuverIndex;
- (void)setManeuverIndex:;
+ (id)navigationPromptManeuver;
+ (id)navigationPromptManeuverWithDictionary:context:;
@end
