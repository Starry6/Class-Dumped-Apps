@interface SALocalSearchShowPlaceDetails : SABaseClientBoundCommand
@property (nonatomic) q itemIndex;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (long long)itemIndex;
- (void)setItemIndex:;
+ (id)showPlaceDetails;
+ (id)showPlaceDetailsWithDictionary:context:;
@end
