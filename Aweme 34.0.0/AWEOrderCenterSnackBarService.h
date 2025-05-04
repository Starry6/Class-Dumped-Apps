@interface AWEOrderCenterSnackBarService : HTSService
@property (nonatomic) DUXBottomNotification bottomNotification;
@property (nonatomic) q type;
@property (nonatomic) @? trackExtraBuild;
@property (nonatomic) AWECodeGenV1OrderToolBarResp toolBarRespModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bottomNotification;
- (void)setBottomNotification:;
- (void)showOrderCenterSnackBarIfNeed:trackExtraBuild:;
- (double)requestUpperTimeLimit;
- (void)setTrackExtraBuild:;
- (void)setToolBarRespModel:;
- (void)openHomepageSideBar;
- (id)orderTypeToTrackString:;
- (id)trackExtraBuild;
- (double)requestLowerTimeLimit;
- (id)toolBarRespModel;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
@end
