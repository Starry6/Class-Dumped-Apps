@interface SAUIDisambiguationItemSelected : SABaseClientBoundCommand
@property (nonatomic) NSString selectedAceId;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)selectedAceId;
- (void)setSelectedAceId:;
+ (id)disambiguationItemSelected;
+ (id)disambiguationItemSelectedWithDictionary:context:;
@end
