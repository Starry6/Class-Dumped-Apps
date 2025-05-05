@interface SAGKAlternateResultsPod : SAGKPodView
@property (nonatomic) NSArray alternateResults;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)alternateResults;
- (void)setAlternateResults:;
+ (id)alternateResultsPod;
+ (id)alternateResultsPodWithDictionary:context:;
@end
