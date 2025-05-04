@interface AWEIMCollectionListModel : NSObject
@property (nonatomic) NSArray sectionModels;
- (id)sectionModels;
- (void)setSectionModels:;
- (long long)numberOfObjectsInSection:;
- (id)sectionModelAtSection:;
- (long long)numberOfSections;
- (id)objectAtIndexPath:;
- (void).cxx_destruct;
@end
