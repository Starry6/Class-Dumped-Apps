@interface BDAAppStorePreloadItem : NSObject
@property (nonatomic) NSString appID;
@property (nonatomic) NSString realAppID;
@property (nonatomic) NSString adID;
@property (nonatomic) NSString logExtra;
@property (nonatomic) q state;
@property (nonatomic) SKStoreProductViewController productController;
@property (nonatomic) SKStoreProductViewController retainProductController;
@property (nonatomic) @? dismissCompletion;
@property (nonatomic) double startLoadTime;
@property (nonatomic) double contentAppearTime;
@property (nonatomic) NSInteger loadDuration;
@property (nonatomic) NSDictionary businessIdentifyInfo;
@property (nonatomic) BOOL isPresentAnimated;
@property (nonatomic) BOOL isDismissAnimated;
@property (nonatomic) BOOL isDuplicated;
@property (nonatomic) NSDictionary skAdNetworkParams;
@property (nonatomic) BOOL isUsePreloading;
@property (nonatomic) @? openPreloadingCompletion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isUsePreloading;
- (id)adID;
- (id)businessIdentifyInfo;
- (void)cleanProduct;
- (double)contentAppearTime;
- (id)dismissCompletion;
- (id)formatJSON:;
- (id)initWithAppID:skAdNetworkParams:adID:logExtra:businessIdentifyInfo:initSKStore:;
- (BOOL)isDismissAnimated;
- (BOOL)isDuplicated;
- (BOOL)isPresentAnimated;
- (void)loadProductCompletion:;
- (id)logExtra;
- (id)openPreloadingCompletion;
- (void)openProductByController:presentCompletion:dismissCompletion:;
- (double)preloadTime;
- (id)productController;
- (id)realAppID;
- (void)resetTimestamp;
- (id)retainProductController;
- (void)setAdID:;
- (void)setBusinessIdentifyInfo:;
- (void)setContentAppearTime:;
- (void)setDismissCompletion:;
- (void)setIsDismissAnimated:;
- (void)setIsDuplicated:;
- (void)setIsPresentAnimated:;
- (void)setIsUsePreloading:;
- (void)setLoadDuration:;
- (void)setLogExtra:;
- (void)setOpenPreloadingCompletion:;
- (void)setProductController:;
- (void)setRealAppID:;
- (void)setRetainProductController:;
- (void)setStartLoadTime:;
- (id)skAdNetworkParams;
- (double)startLoadTime;
- (void)startPreloadTimeTrackEvent;
- (void)stopLoad;
- (void)stopPreloadTimeTrackEvent;
- (id)animationControllerForPresentedController:presentingController:sourceController:;
- (void)productViewControllerDidFinish:;
- (void)setState:;
- (id)animationControllerForDismissedController:;
- (unsigned long long)hash;
- (void)setAppID:;
- (long long)state;
- (id)appID;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (int)loadDuration;
@end
