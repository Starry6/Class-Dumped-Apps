@interface SARadarSetDetails : SABaseClientBoundCommand
@property (nonatomic) NSString classification;
@property (nonatomic) NSString description;
@property (nonatomic) NSString title;
- (id)groupIdentifier;
- (void)setTitle:;
- (BOOL)requiresResponse;
- (id)classification;
- (id)title;
- (void)setClassification:;
- (id)encodedClassName;
- (id)description;
- (void)setDescription:;
+ (id)setDetails;
+ (id)setDetailsWithDictionary:context:;
@end
