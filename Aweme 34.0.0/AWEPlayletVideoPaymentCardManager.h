@interface AWEPlayletVideoPaymentCardManager : NSObject
@property (nonatomic) BOOL videoHasPlay;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)container:viewDidAppearWithContext:onFirstScreen:;
- (void)container:viewDidDisappearWithContext:;
- (void)container:viewHasBecomeActiveWithContext:;
- (void)container:viewHasEnterBackgroundWithContext:;
- (void)container:hasReadyWithContext:;
- (void)container:videoPlayWithContext:;
- (void)container:beforeUpdateData:extraParams:;
- (void)checkVideoShouldUnlock:;
- (BOOL)videoHasPlay;
- (void)setVideoHasPlay:;
- (void)refreshPlayletFeedDataForPlayletID:;
- (void)requestPlayletFeedDataForPlayletID:;
+ (void)showPaymentPopupWithPlayletModel:params:sellScene:object:completion:;
+ (void)showPaymentPopupWithPlayletModel:params:sellScene:object:completion:shouldTrack:;
@end
