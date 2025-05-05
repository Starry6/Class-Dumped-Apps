@interface SATTSGetUnspeakableRangeOfTextCompleted : SABaseClientBoundCommand
@property (nonatomic) NSArray results;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)results;
- (id)encodedClassName;
- (void)setResults:;
+ (id)getUnspeakableRangeOfTextCompleted;
+ (id)getUnspeakableRangeOfTextCompletedWithDictionary:context:;
@end
