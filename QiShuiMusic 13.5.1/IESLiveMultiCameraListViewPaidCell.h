@interface IESLiveMultiCameraListViewPaidCell : IESLiveMultiCameraListViewCell
@property (nonatomic) UILabel paidTagLabel;
@property (nonatomic) UILabel priceLabel;
@property (nonatomic) UIButton paidButton;
@property (nonatomic) @? paidButtonDidClick;
- (void)addPaidUI;
- (id)paidButton;
- (id)paidButtonDidClick;
- (void)paidButtonSelect;
- (id)paidTagLabel;
- (void)setPaidButton:;
- (void)setPaidButtonDidClick:;
- (void)setPaidTagLabel:;
- (void)updateCameraInfo:selected:cellType:;
- (void)updatePaidSubviewsFrame;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)priceLabel;
- (void)setPriceLabel:;
+ (id)cellIdentifier;
@end
