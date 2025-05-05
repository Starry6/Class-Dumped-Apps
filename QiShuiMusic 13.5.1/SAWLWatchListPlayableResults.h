@interface SAWLWatchListPlayableResults : AceObject
@property (nonatomic) NSArray playables;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)playables;
- (void)setPlayables:;
+ (id)watchListPlayableResults;
+ (id)watchListPlayableResultsWithDictionary:context:;
@end
