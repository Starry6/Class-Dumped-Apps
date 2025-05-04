@interface AWEOriginalSoundTrackFoldCell : UITableViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView foldIcon;
@property (nonatomic) BOOL folded;
@property (nonatomic) q foldNumber;
@property (nonatomic) @? foldAction;
- (void)setFolded:;
- (id)foldIcon;
- (id)foldAction;
- (void)setFoldNumber:;
- (void)updateFoldedState:animated:;
- (void)foldButtonClicked:;
- (long long)foldNumber;
- (void)setFoldAction:;
- (void)setFoldIcon:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (BOOL)isFolded;
+ (double)recommendHeight;
@end
