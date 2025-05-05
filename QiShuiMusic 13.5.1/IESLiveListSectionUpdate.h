@interface IESLiveListSectionUpdate : IESLiveListUpdate
@property (nonatomic) Q sectionIndex;
@property (nonatomic) Q sectionIndexNew;
- (unsigned long long)sectionIndexNew;
- (void)setSectionIndexNew:;
- (BOOL)isSectionUpdate;
- (unsigned long long)sectionIndex;
- (void)setSectionIndex:;
+ (id)updateWithType:sectionIndex:newSectionIndex:object:;
@end
