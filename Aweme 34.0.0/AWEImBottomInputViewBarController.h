@interface AWEImBottomInputViewBarController : NSObject
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) NSObject<AWEAwemeDetailBottomBarCommonContextProtocol> context;
@property (nonatomic) UIView imBottomInputbarView;
@property (nonatomic) <AWEIMFeedVideoQuickReplayProtocol> imBottomInputbar;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeModel;
- (void)updateBottomBarWithAweme:updateTiming:;
- (BOOL)canShowBottomBarForAweme:;
- (void)updateCurrentIndexPath:;
- (id)imBottomInputbarView;
- (id)imBottomInputbar;
- (void)setImBottomInputbar:;
- (void)setImBottomInputbarView:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (Class)contextClass;
- (id)bottomBarView;
+ (id)p_makeExtraLogInfoForSharingWithAwemeModel:fromAweme:context:referString:;
+ (id)shareContextFromCurrentCellConrtoller:referString:;
@end
