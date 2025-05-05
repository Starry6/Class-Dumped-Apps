@interface SADailyBriefingGetETAInfo : SABaseClientBoundCommand
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
- (id)groupIdentifier;
- (double)latitude;
- (BOOL)requiresResponse;
- (void)setLatitude:;
- (id)encodedClassName;
- (void)setLongitude:;
- (double)longitude;
@end
