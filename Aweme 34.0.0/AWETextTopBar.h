@interface AWETextTopBar : UIView
@property (nonatomic) AWETextToolStackView stackView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateAllBarItems;
- (void)updateBarItemWithItemIdentity:;
- (void)registerItemConfigProvider:clickHandler:forItemIdentity:;
- (id)getItemViewWithItemIdentity:;
- (id)initWithBarItemIdentityList:;
- (void)p_setupWithBarItemWithIdentityList:;
- (void)p_setupBarStackViewWithIdentityList:;
- (id)itemViewCenterOffsetWithItemIdentity:;
- (id)stackView;
- (void)setStackView:;
- (id)intrinsicContentSize;
- (void).cxx_destruct;
@end
