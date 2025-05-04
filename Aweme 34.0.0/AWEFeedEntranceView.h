@interface AWEFeedEntranceView : UIView
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) UIView backgroundView;
@property (nonatomic) BOOL shouldFixTheme;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configAlpha:transform:;
- (void)configImage:Label:position:;
- (void)themeDidChange:;
- (BOOL)shouldFixTheme;
- (void)setShouldFixTheme:;
- (id)textLabel;
- (id)init;
- (void)setBackgroundView:;
- (id)backgroundView;
- (void).cxx_destruct;
- (void)setImageView:;
- (id)imageView;
- (void)setTextLabel:;
@end
