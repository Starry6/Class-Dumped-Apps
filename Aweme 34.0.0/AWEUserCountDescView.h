@interface AWEUserCountDescView : UIView
@property (nonatomic) NSString titleKey;
@property (nonatomic) UILabel userCountLabel;
@property (nonatomic) UILabel userCountDescLabel;
- (id)userCountLabel;
- (void)setUserCountLabel:;
- (void)setupUIWithUserCount:TitleKey:;
- (void)setUserCountDescLabel:;
- (id)userCountDescLabel;
- (void)updateWithUserCount:;
- (id)initWithUserCount:titleKey:;
- (void)updateWithUserCount:title:;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (void)setTitleKey:;
- (id)titleKey;
@end
