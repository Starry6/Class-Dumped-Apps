@interface AWEIMExpandCollectionListModel : AWEIMCollectionListModel
@property (nonatomic) Q expansion;
@property (nonatomic) q numberOfObjectsInAll;
- (long long)numberOfObjectsInSection:;
- (id)sectionModelAtSection:;
- (long long)numberOfObjectsInAll;
- (long long)calculateNumberOfObjectsInAll;
- (long long)expandNumberOfSections;
- (void)setNumberOfObjectsInAll:;
- (long long)expandNumberOfObjectsInAll;
- (id)init;
- (id)objectAtIndexPath:;
- (unsigned long long)expansion;
- (void)setExpansion:;
@end
