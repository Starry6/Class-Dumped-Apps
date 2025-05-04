@interface AWEDeliveryTemplateCardCell : AWEDeliveryBaseUserMsgCell
@property (nonatomic) AWEECOMIMDynamicCardContainerView cardView;
@property (nonatomic) AWEDeliveryDynamicCardErrorView errorView;
@property (nonatomic) UIView<AWEDeliveryCardComponentLoadingViewProtocol> loadingView;
@property (nonatomic) NSDictionary dynamicDataDict;
@property (nonatomic) AWEDeliveryTemplateCardModel cellModel;
- (void)setCellModel:;
- (void)didCustomInit;
- (void)fetchDynamicDataAndUpdateCardView;
- (void)updateTemplateModelCallback;
- (void)cardViewDidChangeHeight;
- (id)dynamicDataDict;
- (void)setDynamicDataDict:;
- (void)setLoadingView:;
- (id)loadingView;
- (void).cxx_destruct;
- (id)cardView;
- (void)setCardView:;
- (id)errorView;
- (void)setErrorView:;
+ (void)getSize:withModel:;
@end
