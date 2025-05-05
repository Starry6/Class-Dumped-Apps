@interface IESECGoodsDetailSectionObject : NSObject
@property (nonatomic) # viewModelClass;
@property (nonatomic) NSString sectionIdentifier;
@property (nonatomic) IESECGoodsDetailPageBaseViewModel viewModel;
@property (nonatomic) NSArray slices;
@property (nonatomic) IESECGoodsDetailComponentObject sliceObject;
- (void)setSliceObject:;
- (id)diffIdentifier;
- (id)initWithSectionIdentifier:viewModel:;
- (BOOL)isEqualToDiffableObject:;
- (void)setViewModelClass:;
- (id)sliceObject;
- (Class)viewModelClass;
- (void)setSectionIdentifier:;
- (id)viewModel;
- (id)sectionIdentifier;
- (void).cxx_destruct;
- (void)setViewModel:;
- (id)slices;
- (void)setSlices:;
+ (id)objectWithModelClass:viewModel:;
+ (id)sectionObjectWithBFFSliceSection:;
+ (id)sectionObjectWithNewHeaderSection:;
@end
