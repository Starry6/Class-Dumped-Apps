@interface SAGuidanceSuggestedUtterances : SADomainObject
@property (nonatomic) NSArray utterances;
- (id)groupIdentifier;
- (id)encodedClassName;
- (void)setUtterances:;
- (id)utterances;
+ (id)suggestedUtterances;
+ (id)suggestedUtterancesWithDictionary:context:;
@end
