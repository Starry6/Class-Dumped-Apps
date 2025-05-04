@interface AWETeenPureModePageService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (Class)pinchZoomTransitionHelperClass;
- (id)createPureModePageViewController;
- (BOOL)canPinchToSinglePage;
- (id)createPinchZoomTransitionHelper;
- (void)toastWhenInPureModePageShare;
- (unsigned long long)pinchToSinglePageType;
@end
