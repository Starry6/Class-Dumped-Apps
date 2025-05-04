@interface AWESharePanelListConfigurator : NSObject
@property (nonatomic) <AWESharePanelListCellModel> cellModel;
@property (nonatomic) <AWESharePanelListCell> cell;
- (void)setCellModel:;
- (id)initWithCell:cellModel:;
- (void)CONFIGURE_WITH_TYPE_AWEShareTitleCell;
- (void)CONFIGURE_WITH_TYPE_AWESharePanelListContainerCell;
- (void)CONFIGURE_WITH_TYPE_AWESharePanelListVerticalCell;
- (void)CONFIGURE_WITH_TYPE_AWESharePanelListIMContainerCell;
- (id)configure;
- (void).cxx_destruct;
- (id)cell;
- (void)setCell:;
- (id)cellModel;
+ (id)configuratorWithCell:cellModel:;
@end
