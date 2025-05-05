@interface IESECTabKitContainerTrackService : NSObject
@property (nonatomic) IESECTracker tracker;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)createTrackContextWithLogExtra:;
- (id)pagerViewEnterType:;
- (void)trackEcomPageCrossSlide:extraParams:;
- (void)trackEcomStayTime:logExtra:extraParams:;
- (void)trackEvent:extraParams:;
- (void)trackEvent:logExtra:extraParams:;
- (void)trackPageView:enterType:extraParams:;
- (void)updateTrackLogExtra:;
- (void)setTracker:;
- (id)init;
- (id)tracker;
- (void).cxx_destruct;
@end
