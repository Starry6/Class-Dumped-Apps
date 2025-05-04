@interface AWEStickerAIImageToTextHandler : AWEStickerApplyBaseHandler
@property (nonatomic) AWEVideoPublishViewModel repository;
@property (nonatomic) <ACCCameraService> cameraService;
@property (nonatomic) <ACCRecordPropService> propService;
@property (nonatomic) <ACCRecordFlowService> recordFlowService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cameraService;
- (void)setCameraService:;
- (id)propService;
- (void)setPropService:;
- (void)flowServiceDidRemoveLastSegment:;
- (void)flowServiceDidEnterNextPageWithMode:;
- (void)handleArg2:arg3:;
- (void)handlerDidBecomeActive;
- (void)camera:didRecvMessage:;
- (id)recordFlowService;
- (void)handleJson:taskId:;
- (void)camera:willApplySticker:;
- (void)setRecordFlowService:;
- (id)repository;
- (void).cxx_destruct;
- (void)setRepository:;
@end
