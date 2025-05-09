@interface AWELiveLifeGXLynxView : UIView
@property (nonatomic) AWELiveLifeLynxView lynxView;
@property (nonatomic) NSString currentUrl;
@property (nonatomic) AWEPOICubeModel lynxModel;
@property (nonatomic) NSDictionary updateParams;
@property (nonatomic) NSValue tempLynxSize;
@property (nonatomic) BOOL lynxLoadFinished;
@property (nonatomic) double lynxLoadBeginTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)trackWithEvent:param:;
- (id)lynxModel;
- (id)lynxView;
- (void)setLynxModel:;
- (void)setLynxView:;
- (id)currentUrl;
- (void)setCurrentUrl:;
- (id)updateParams;
- (void)setUpdateParams:;
- (void)cubeView:viewDidChangeContentSize:;
- (void)cubeViewWillStartLoading:;
- (void)cubeView:didStartFetchResourceWithURL:;
- (void)cubeView:didFetchedResource:error:;
- (void)cubeViewDidFirstScreen:;
- (void)cubeView:didFinishLoadWithURL:;
- (void)cubeView:didLoadFailedWithUrl:error:;
- (void)cubeView:didReceiveError:;
- (void)gx_bindData:;
- (void)setLynxLoadFinished:;
- (id)tempLynxSize;
- (void)setTempLynxSize:;
- (BOOL)lynxLoadFinished;
- (double)lynxLoadBeginTime;
- (void)setLynxLoadBeginTime:;
- (id)initWithFrame:;
- (void).cxx_destruct;
@end
