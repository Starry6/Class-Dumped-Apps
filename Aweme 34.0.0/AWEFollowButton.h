@interface AWEFollowButton : AWEUIListCellActionButton
@property (nonatomic) double highlightedScale;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateFont:;
- (double)highlightedScale;
- (void)setHighlightedScale:;
- (void)updateWithFollowStatus:followerStatus:;
- (void)updateWithTitle:requiresAttention:;
- (void)updateColorModel:;
- (void)updateWithTitle:icon:padding:requiresAttention:;
- (id)initWithFrame:;
- (void)setHighlighted:;
- (void)updateWithTitle:;
+ (double)preferredButtonWidth;
@end
