@interface AWEMixVideoPaymentCardManager : NSObject
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
- (void)refreshMixFeedDataForMixID:;
- (void)checkVideoShouldUnlock:;
- (BOOL)videoHasPlay;
- (void)setVideoHasPlay:;
+ (void)showPaymentPopupWithMixModel:params:completion:;
@end
