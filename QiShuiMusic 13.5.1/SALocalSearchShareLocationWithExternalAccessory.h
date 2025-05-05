@interface SALocalSearchShareLocationWithExternalAccessory : SADomainCommand
@property (nonatomic) SALocalSearchMapItem mapItem;
@property (nonatomic) BOOL useNavigationDestination;
- (id)mapItem;
- (id)groupIdentifier;
- (void)setMapItem:;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)useNavigationDestination;
- (void)setUseNavigationDestination:;
+ (id)shareLocationWithExternalAccessory;
+ (id)shareLocationWithExternalAccessoryWithDictionary:context:;
@end
