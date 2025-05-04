@interface AWEProfileMenuVerticalMateFooter : UICollectionReusableView
@property (nonatomic) UILabel friendshipDateLabel;
@property (nonatomic) NSCalendar calendar;
- (void)setupCalendar;
- (void)setFriendshipDateLabel:;
- (id)friendshipDateLabel;
- (id)replaceFormat:placeholder:withValue:;
- (void)configWithDate:;
- (void)setCalendar:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)calendar;
- (void)setupViews;
+ (double)footerHeight;
@end
