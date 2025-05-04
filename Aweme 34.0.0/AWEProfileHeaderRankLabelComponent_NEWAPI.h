@interface AWEProfileHeaderRankLabelComponent_NEWAPI : AWEProfileHeaderBaseComponent
@property (nonatomic) AWEProfileHeaderVirtualView virtualView;
@property (nonatomic) AWEProfileRankModel rankModel;
@property (nonatomic) BOOL hasTrackedShowIdentifies;
@property (nonatomic) AWEProfileBillboardRankView rankView;
- (id)buildVirtualView:;
- (void)setRankView:;
- (id)rankView;
- (id)rankModel;
- (void)setRankModel:;
- (void)setVirtualView:;
- (void)updateComponentData:;
- (BOOL)hasTrackedShowIdentifies;
- (void)setHasTrackedShowIdentifies:;
- (void)configRankViewWith:;
- (void).cxx_destruct;
- (id)virtualView;
@end
