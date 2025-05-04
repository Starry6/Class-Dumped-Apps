@interface AWEAdTaskLiteDescriptionItemView : UIView
@property (nonatomic) double titleWidth;
@property (nonatomic) UILabel colonLabel;
@property (nonatomic) YYLabel descriptionLabel;
@property (nonatomic) AWETaskElasticLayerModel item;
- (void)setUpWithDescriptionItem:titleWidth:;
- (id)colonLabel;
- (void)setTitleWidth:;
- (void)setDescriptionItemWithUrlTransfer:;
- (void)setColonLabel:;
- (void)setDescriptionLabel:;
- (void)drawRect:;
- (void)setItem:;
- (id)initWithFrame:;
- (id)item;
- (void).cxx_destruct;
- (id)descriptionLabel;
- (double)titleWidth;
@end
