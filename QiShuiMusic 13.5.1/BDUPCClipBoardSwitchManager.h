@interface BDUPCClipBoardSwitchManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)clipBoardStatus;
+ (BOOL)recallStrategy:;
+ (BOOL)canPopupRecallView:;
+ (id)clipBoardRecallAlertConfig;
+ (id)clipBoardRecallBottomBannerConfig;
+ (id)clipBoardRecallTopBannerConfig;
+ (id)mapScenceInt2String:;
+ (void)openSystemAuthorityPage;
+ (id)popupLimitConfig:;
+ (BOOL)popupLimitStrategy:;
+ (void)popupRecallView:type:completion:;
+ (void)popupRecord:;
+ (void)raiseRefuseRecord:;
+ (long long)recallStrategy;
+ (void)resetRefuseRecord:;
+ (void)setClipBoardStatus:;
+ (id)delegate;
@end
