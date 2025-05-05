@interface ASCAdLockupPresenter : NSObject
@property (nonatomic) <ASCAdLockupPresenterView> view;
@property (nonatomic) ASCLockup lockup;
- (void)dealloc;
- (id)view;
- (void).cxx_destruct;
- (id)lockup;
- (void)setLockup:;
- (void)setDeveloperName:;
- (void)lockupPresenterDidChange:;
- (void)setEditorsChoice:;
- (void)setProductRating:;
- (void)setProductRatingBadge:;
- (void)setProductDescription:;
- (id)initWithView:lockupPresenter:;
- (void)setAdTransparencyButtonHidden:;
- (BOOL)shouldDisplayDescriptionForLockup:;
@end
