@interface AWEHPDiscoverFeedEntranceView : AWEHPFeedEntranceButton
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel textLabel;
- (void)layoutSubviews;
- (void)themeDidChange:;
- (void)setAlpha:;
- (id)init;
- (void)setHidden:;
@end
