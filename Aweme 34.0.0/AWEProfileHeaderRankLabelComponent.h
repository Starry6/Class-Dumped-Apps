@interface AWEProfileHeaderRankLabelComponent : AWERLComponent
@property (nonatomic) AWERLVirtualNode node;
@property (nonatomic) AWEProfileRankModel rankModel;
@property (nonatomic) BOOL hasTrackedShowIdentifies;
@property (nonatomic) AWEProfileBillboardRankView rankView;
- (void)setRankView:;
- (id)rankView;
- (id)rankModel;
- (void)setRankModel:;
- (id)virtualNodeWithChildren:;
- (void)updateComponentData:;
- (BOOL)hasTrackedShowIdentifies;
- (void)setHasTrackedShowIdentifies:;
- (void)configRankViewWith:;
- (id)node;
- (void).cxx_destruct;
- (void)setNode:;
@end
