@interface SALocalSearchGetNavigationStatus : SADomainCommand
@property (nonatomic) NSNumber getRoute;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)getRoute;
- (void)setGetRoute:;
+ (id)getNavigationStatus;
+ (id)getNavigationStatusWithDictionary:context:;
@end
