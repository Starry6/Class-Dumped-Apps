@interface SAAISearchCompleted : SABaseClientBoundCommand
@property (nonatomic) NSArray results;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)results;
- (id)encodedClassName;
- (void)setResults:;
+ (id)searchCompleted;
+ (id)searchCompletedWithDictionary:context:;
@end
