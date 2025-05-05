@interface SATTSEstimateTTSRequestDuration : SABaseClientBoundCommand
@property (nonatomic) NSString gender;
@property (nonatomic) NSString locale;
@property (nonatomic) NSArray texts;
- (void)setLocale:;
- (id)groupIdentifier;
- (id)gender;
- (void)setGender:;
- (id)locale;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
- (id)texts;
- (void)setTexts:;
+ (id)estimateTTSRequestDuration;
+ (id)estimateTTSRequestDurationWithDictionary:context:;
@end
