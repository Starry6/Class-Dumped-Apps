@interface PPFeedback : PPBaseFeedback
- (id)initWithExplicitlyEngagedString:;
- (id)initWithExplicitlyRejectedString:;
- (id)initWithImplicitlyEngagedString:;
- (id)initWithImplicitlyRejectedString:;
- (id)initWithOfferedString:;
- (id)initWithExplicitlyEngagedStrings:implicitlyEngagedStrings:offeredStrings:;
- (id)initWithExplicitlyEngagedStrings:explicitlyRejectedStrings:implicitlyEngagedStrings:implicitlyRejectedStrings:;
- (id)initWithExplicitlyEngagedStrings:explicitlyRejectedStrings:implicitlyEngagedStrings:implicitlyRejectedStrings:offeredStrings:;
@end
