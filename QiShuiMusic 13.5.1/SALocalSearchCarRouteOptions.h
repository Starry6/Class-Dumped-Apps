@interface SALocalSearchCarRouteOptions : AceObject
@property (nonatomic) BOOL avoidHighways;
@property (nonatomic) BOOL avoidTolls;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAvoidHighways:;
- (void)setAvoidTolls:;
- (BOOL)avoidHighways;
- (BOOL)avoidTolls;
- (id)groupIdentifier;
- (id)encodedClassName;
+ (id)carRouteOptions;
+ (id)carRouteOptionsWithDictionary:context:;
@end
