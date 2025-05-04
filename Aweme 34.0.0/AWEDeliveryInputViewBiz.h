@interface AWEDeliveryInputViewBiz : NSObject
@property (nonatomic) NSDictionary requestCommonParams;
@property (nonatomic) NSDictionary videoSetting;
@property (nonatomic) @? onSendPhotos;
@property (nonatomic) @? oneTakePhotoBlock;
@property (nonatomic) AWEDeliveryInputViewOptions options;
- (id)generateRequestParamsWithParams:;
- (id)requestCommonParams;
- (void)setRequestCommonParams:;
- (void)setOnSendPhotos:;
- (id)initWithRequestCommonParams:;
- (void)fetchMoreViewDataWithCompletion:;
- (id)onSendPhotos;
- (void)onClickChoosePhotoWithCompletion:;
- (void)onClickTakePhotoWithCompletion:;
- (id)getMoreViewDefaultItems;
- (void)callMediaWithType:;
- (void)setOneTakePhotoBlock:;
- (void)sendPhotosWithAssets:itemType:;
- (id)videoSetting;
- (void)showOverSizeErrorWithCount:;
- (id)oneTakePhotoBlock;
- (void)setVideoSetting:;
- (void)setOptions:;
- (id)options;
- (void).cxx_destruct;
@end
