@interface AWETextToolStackView : UIView
@property (nonatomic) UIStackView stackView;
@property (nonatomic) {CGSize=dd} stackViewSize;
@property (nonatomic) {CGSize=dd} itemViewSize;
@property (nonatomic) double itemSpacing;
@property (nonatomic) NSArray itemWraps;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateAllBarItems;
- (void)updateBarItemWithItemIdentity:;
- (void)registerItemConfigProvider:clickHandler:forItemIdentity:;
- (id)getItemViewWithItemIdentity:;
- (id)initWithBarItemIdentityList:itemViewSize:itemSpacing:;
- (id)itemViewCenterOffsetWithItemIdentity:;
- (void)p_setupWithStackViewWithIdentityList:itemViewSize:itemSpacing:;
- (id)itemWraps;
- (void)p_updateBarItemWithItemWrap:;
- (id)p_findItemConfigWithItemIdentity:;
- (id)stackViewSize;
- (void)p_starShineAnimationWithStar:;
- (void)setStackViewSize:;
- (void)p_onBarItemSelect:;
- (void)setItemWraps:;
- (id)stackView;
- (void)setStackView:;
- (double)itemSpacing;
- (id)intrinsicContentSize;
- (void)setItemSpacing:;
- (void).cxx_destruct;
- (id)itemViewSize;
- (void)setItemViewSize:;
@end
