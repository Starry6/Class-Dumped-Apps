@interface AWEIMOfficialDetailListBottomUnreadTipComponent : NSObject
@property (nonatomic) <AWEOfficialDetailListUnreadBottomTipViewProtocol> delegate;
@property (nonatomic) AWEOfficialDetailListViewController weakVC;
@property (nonatomic) AWEOfficialDetailListUnreadBottomTipView bottomTipView;
@property (nonatomic) Q currentLatestIndex;
@property (nonatomic) q maxLimitCount;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)hideBottomTips;
- (id)weakVC;
- (void)setWeakVC:;
- (id)bottomTipView;
- (void)setBottomTipView:;
- (long long)maxLimitCount;
- (void)setMaxLimitCount:;
- (id)initWithVCParent:delegate:;
- (void)showBottomTipViewWithCount:;
- (void)bottomUnreadTipViewWillHandleCellModel:;
- (unsigned long long)currentLatestIndex;
- (void)setCurrentLatestIndex:;
- (BOOL)isShowing;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
