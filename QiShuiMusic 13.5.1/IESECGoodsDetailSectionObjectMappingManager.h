@interface IESECGoodsDetailSectionObjectMappingManager : NSObject
@property (nonatomic) NSMutableDictionary dataModelMapping;
@property (nonatomic) NSMutableDictionary metaModelMapping;
@property (nonatomic) NSMutableDictionary viewModelMapping;
- (id)dataModelMapping;
- (id)metaModelMapping;
- (void)registerSectionViewModel;
- (void)registerViewDataModel;
- (void)setDataModelMapping:;
- (void)setMetaModelMapping:;
- (void)setViewModelMapping:;
- (id)viewModelMapping;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
