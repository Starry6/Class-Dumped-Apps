@interface AWEIMRTVListSelectBaseViewControllerContext : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) # cellClass;
@property (nonatomic) NSString leftNavigationButtonStyle;
@property (nonatomic) NSString rightNavigationButtonStyle;
@property (nonatomic) NSString leftNavigationButtonTitle;
@property (nonatomic) NSString rightNavigationButtonTitle;
@property (nonatomic) q maxSelectCount;
@property (nonatomic) BOOL infiniteSelect;
@property (nonatomic) BOOL hideCellFriendLabel;
@property (nonatomic) BOOL autoSelectOnlineUsers;
@property (nonatomic) BOOL multiselect;
@property (nonatomic) BOOL isHalfScreen;
- (void)setMaxSelectCount:;
- (void)setIsHalfScreen:;
- (BOOL)isHalfScreen;
- (id)initWithTitle:cellClass:;
- (void)setLeftNavigationButtonStyle:;
- (void)setAutoSelectOnlineUsers:;
- (id)leftNavigationButtonStyle;
- (id)leftNavigationButtonTitle;
- (id)rightNavigationButtonStyle;
- (id)rightNavigationButtonTitle;
- (id)cellIndetifier;
- (BOOL)infiniteSelect;
- (BOOL)autoSelectOnlineUsers;
- (long long)maxSelectCount;
- (BOOL)hideCellFriendLabel;
- (void)setRightNavigationButtonStyle:;
- (void)setLeftNavigationButtonTitle:;
- (void)setRightNavigationButtonTitle:;
- (void)setInfiniteSelect:;
- (void)setHideCellFriendLabel:;
- (Class)cellClass;
- (void)setMultiselect:;
- (void).cxx_destruct;
- (id)title;
- (BOOL)multiselect;
@end
