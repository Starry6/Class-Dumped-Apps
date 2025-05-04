@interface AWESearchLoadMoreFooter : AWELoadMoreFooter
@property (nonatomic) UILabel originLabel;
@property (nonatomic) BOOL originLabelIsHidden;
@property (nonatomic) YYLabel labelY;
@property (nonatomic) q mj_insetBResetedOffset;
@property (nonatomic) NSAttributedString noMoreDataAttributedStringWithLink;
- (void)placeSubviews;
- (void)setShowNoMoreDataText:;
- (void)setMj_insetBResetedOffset:;
- (BOOL)showNoMoreDataText;
- (void)setOriginLabel:;
- (id)originLabel;
- (long long)mj_insetBResetedOffset;
- (void)setNoMoreDataAttributedStringWithLink:;
- (id)labelY;
- (void)getOriginalLabel;
- (id)noMoreDataAttributedStringWithLink;
- (BOOL)originLabelIsHidden;
- (void)setOriginLabelIsHidden:;
- (id)getCurrentLable;
- (void)setLabelY:;
- (void)shouldHideLable:;
- (void)prepare;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setState:;
@end
