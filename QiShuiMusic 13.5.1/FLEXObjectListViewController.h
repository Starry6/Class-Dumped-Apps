@interface FLEXObjectListViewController : FLEXFilteringTableViewController
@property (nonatomic) NSArray sections;
@property (nonatomic) NSArray allSections;
@property (nonatomic) NSArray references;
@property (nonatomic) NSArray predicates;
@property (nonatomic) NSArray sectionTitles;
- (id)initWithReferences:;
- (id)initWithReferences:predicates:sectionTitles:;
- (void)viewDidLoad;
- (id)makeSections;
- (id)buildSections:predicates:;
- (id)makeSection:title:;
- (id)references;
- (id)predicates;
- (id)sectionTitles;
- (void).cxx_destruct;
+ (id)defaultPredicateForSection:;
+ (id)defaultPredicates;
+ (id)defaultSectionTitles;
+ (id)instancesOfClassWithName:retained:;
+ (id)subclassesOfClassWithName:;
+ (id)objectsWithReferencesToObject:retained:;
@end
