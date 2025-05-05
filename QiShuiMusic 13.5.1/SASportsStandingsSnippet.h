@interface SASportsStandingsSnippet : SASportsSnippet
@property (nonatomic) NSArray columns;
@property (nonatomic) NSArray entities;
@property (nonatomic) NSArray selectedEntities;
@property (nonatomic) BOOL showCardinalPositions;
- (id)columns;
- (id)groupIdentifier;
- (id)entities;
- (void)setEntities:;
- (id)encodedClassName;
- (void)setColumns:;
- (id)selectedEntities;
- (void)setSelectedEntities:;
- (BOOL)showCardinalPositions;
- (void)setShowCardinalPositions:;
+ (id)standingsSnippet;
+ (id)standingsSnippetWithDictionary:context:;
@end
