@interface SATTSGetUnspeakableRangeOfText : SABaseClientBoundCommand
@property (nonatomic) NSString locale;
@property (nonatomic) NSArray texts;
- (void)setLocale:;
- (id)groupIdentifier;
- (id)locale;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
- (id)texts;
- (void)setTexts:;
+ (id)getUnspeakableRangeOfText;
+ (id)getUnspeakableRangeOfTextWithDictionary:context:;
@end
