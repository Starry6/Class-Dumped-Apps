@interface IESLiveUserCardPreviewComponentView : UIView
@property (nonatomic) IESLiveUserCardStore store;
@property (nonatomic) UILabel descText;
- (id)descText;
- (void)doTap;
- (void)setDescText:;
- (void)trackWithEventName:;
- (void)setStore:;
- (id)initWithStore:;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)store;
- (void)setupUI;
@end
