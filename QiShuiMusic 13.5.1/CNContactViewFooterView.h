@interface CNContactViewFooterView : UIView
@property (nonatomic) UILabel label;
@property (nonatomic) CNContact contact;
- (id)init;
- (id)contact;
- (void)setContact:;
- (void)setLabel:;
- (id)label;
- (void).cxx_destruct;
- (void)setupSubviews;
- (void)updateLabelText;
@end
