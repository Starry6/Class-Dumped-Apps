@interface PLSqliteQueryPlan : NSObject
@property (nonatomic) NSString graphDescription;
@property (nonatomic) NSString listDescription;
- (id)init;
- (void).cxx_destruct;
- (void)addNodeWithIdentifier:parentIdentifier:unused:nodeDescription:;
- (void)addNodeWithStringRepresentation:;
- (id)_stringRepresentationRegex;
- (id)listDescription;
- (id)graphDescription;
- (void)_renderLevelWithParentIdentifier:prefix:intoLines:;
@end
