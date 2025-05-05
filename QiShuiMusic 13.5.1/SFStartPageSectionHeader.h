@interface SFStartPageSectionHeader : UICollectionReusableView
@property (nonatomic) NSArray actions;
@property (nonatomic) SFBannerModel banner;
@property (nonatomic) double bottomGap;
- (id)banner;
- (void)updateViewsDependingOnCustomTraits;
- (void)layoutSubviews;
- (id)initWithCoder:;
- (id)initWithFrame:;
- (void)traitCollectionDidChange:;
- (id)_disclosureButtonForLayout;
- (void)setBottomGap:;
- (void)setBanner:;
- (id)actions;
- (void).cxx_destruct;
- (void)setActions:expandsModally:withSize:;
- (void)_createSeparatorViewIfNeeded;
- (double)bottomGap;
- (void)setModel:visualStyleProvider:resolvingActionsUsingBlock:;
+ (id)reuseIdentifier;
@end
