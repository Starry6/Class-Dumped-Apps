@interface IESLiveUserCardFlashSaleView : UIView
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) IESLiveUserCardStore store;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configWithStore:;
- (void)configWithTag:isShowWhite:;
- (void)onActionClicked:;
- (void)setStore:;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)store;
- (BOOL)shouldShow;
- (id)contentLabel;
- (void)setContentLabel:;
@end
