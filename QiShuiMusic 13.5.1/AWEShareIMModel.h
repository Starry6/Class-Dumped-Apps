@interface AWEShareIMModel : NSObject
@property (nonatomic) BOOL hidesIMContacts;
@property (nonatomic) BOOL shouldIgnoreDuoshanStrategy;
@property (nonatomic) BOOL showingInverseShareUserIcon;
@property (nonatomic) BOOL hideToast;
@property (nonatomic) BOOL hideBottomTips;
@property (nonatomic) IESIMAwemeModel awemeModel;
@property (nonatomic) UIImage image;
- (void)setShouldIgnoreDuoshanStrategy:;
- (void)setShowingInverseShareUserIcon:;
- (BOOL)hidesIMContacts;
- (id)awemeModel;
- (BOOL)hideBottomTips;
- (BOOL)hideToast;
- (void)setAwemeModel:;
- (void)setHideBottomTips:;
- (void)setHideToast:;
- (void)setHidesIMContacts:;
- (BOOL)shouldIgnoreDuoshanStrategy;
- (BOOL)showingInverseShareUserIcon;
- (void)setImage:;
- (void).cxx_destruct;
- (id)image;
@end
