@interface SADPDeviceSearch : SABaseClientBoundCommand
@property (nonatomic) NSArray deviceSearchQueries;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)deviceSearchQueries;
- (void)setDeviceSearchQueries:;
+ (id)deviceSearch;
+ (id)deviceSearchWithDictionary:context:;
@end
