@interface AWEPaySKMOrderSubmitPromotionView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel placeholderLabel;
@property (nonatomic) UILabel promotionTag;
@property (nonatomic) BOOL isLoading;
- (id)promotionTag;
- (void)updateWithPromotionInfo:isLoading:;
- (void)setPromotionTag:;
- (id)init;
- (BOOL)isLoading;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setIsLoading:;
- (void)setupUI;
- (id)placeholderLabel;
- (void)setPlaceholderLabel:;
@end
