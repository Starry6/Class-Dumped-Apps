@interface AWENewCoverEditFlowViewModel : NSObject
@property (nonatomic) ACCCameraSubscription subscription;
@property (nonatomic) BOOL isQuickPublishBubbleShowed;
@property (nonatomic) AWEResourceUploadParametersResponseModel uploadParamsCache;
@property (nonatomic) RACSignal didClickBackActionSignal;
@property (nonatomic) BOOL hasEditClipAfterSave;
@property (nonatomic) BOOL isStickerEditedAfterSave;
@property (nonatomic) BOOL imageTemplateInfoDidEditAfterSave;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isVideoEdited;
- (BOOL)isQuickPublishBubbleShowed;
- (id)uploadParamsCache;
- (void)notifyNewCoverEditPageDidSave;
- (id)subscription;
- (void)setSubscription:;
- (void)dealloc;
- (void).cxx_destruct;
- (void)addSubscriber:;
- (void)removeSubscriber:;
@end
