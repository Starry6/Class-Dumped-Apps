@interface MPSectionedIdentifierListEnumerator : NSEnumerator
@property (nonatomic) Q options;
@property (nonatomic) NSMutableArray contexts;
@property (nonatomic) NSMutableArray nextEmittableEnumerationResults;
@property (nonatomic) MPSectionedIdentifierListEntry endEntry;
@property (nonatomic) MPSectionedIdentifierList sectionedIdentifierList;
- (void)setOptions:;
- (id)nextObject;
- (id)contexts;
- (unsigned long long)options;
- (void)setContexts:;
- (void).cxx_destruct;
- (id)initWithSectionedIdentifierList:options:startEntry:endEntry:withExclusiveAccessToken:;
- (id)nextObjectWithExclusiveAccessToken:;
- (id)sectionedIdentifierList;
- (id)nextEmittableEnumerationResults;
- (void)setNextEmittableEnumerationResults:;
- (id)endEntry;
- (void)setEndEntry:;
@end
