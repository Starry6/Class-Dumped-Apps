@interface AWEUpgradeFilterBaseEditorImpl : AEKBaseRenderEditor
@property (nonatomic) <AEKUpgradeFilterContainerConvertible> filterContainer;
@property (nonatomic) <AEKEditorMaterial> material;
@property (nonatomic) NSArray filterSegmentDatas;
@property (nonatomic) <AEKFilterItemOperator> firstOperator;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)filterSegmentDatas;
- (id)filterEditorForMaterial:;
- (id)firstOperator;
- (id)filterImpls;
- (id)filterContainer;
- (id)aek_filterEditorForMaterial:;
- (id)filterWithID:;
- (id)addFilterWithResource:;
- (BOOL)hasFilterWithID:;
- (BOOL)hasFilterUsingUmpire:;
- (id)initWithMaterial:baseData:subscriberProvider:coreUnit:supportTypes:;
- (void)setFilterContainer:;
- (id)filterSegmentImpls;
- (BOOL)isExistFilter;
- (id)filterWithResourcePath:;
- (id)batch:;
- (void).cxx_destruct;
- (id)material;
- (void)setMaterial:;
@end
