@interface PPMappedFeedback : PPBaseFeedback
- (id)initWithImplicitlyRejectedString:mappingId:;
- (id)initWithExplicitlyEngagedString:mappingId:;
- (id)initWithImplicitlyEngagedString:mappingId:;
- (id)initWithExplicitlyEngagedStrings:implicitlyEngagedStrings:offeredStrings:mappingId:;
- (id)initWithExplicitlyEngagedStrings:explicitlyRejectedStrings:implicitlyEngagedStrings:implicitlyRejectedStrings:mappingId:;
- (id)initWithExplicitlyRejectedString:mappingId:;
- (id)initWithExplicitlyEngagedStrings:explicitlyRejectedStrings:implicitlyEngagedStrings:implicitlyRejectedStrings:offeredStrings:mappingId:;
- (id)initWithOfferedString:mappingId:;
@end
