@interface AWEECOMIMNewRateResolveView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIView tagListView;
@property (nonatomic) AWEECOMIMRateServiceModel rateModel;
@property (nonatomic) NSString selectedTitle;
@property (nonatomic) NSDictionary tagTitleValueDict;
@property (nonatomic) @? modifyResolveBlock;
- (void)updateViewWithModel:;
- (id)tagListView;
- (void)setTagListView:;
- (void)setRateModel:;
- (void)updateTagBtn:isSelected:;
- (void)tagSelected:;
- (void)setTagTitleValueDict:;
- (id)rateModel;
- (id)tagTitleValueDict;
- (id)modifyResolveBlock;
- (void)setModifyResolveBlock:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)selectedTitle;
- (void)setSelectedTitle:;
+ (double)viewHeightWithResolveModel:width:;
+ (id)titleFont;
@end
