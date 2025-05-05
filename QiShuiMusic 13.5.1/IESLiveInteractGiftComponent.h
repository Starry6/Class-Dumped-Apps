@interface IESLiveInteractGiftComponent : IESLiveInteractComponentBase
@property (nonatomic) double playStickerTimestamp;
@property (nonatomic) <IESLiveInteractVideoCaptureRouter> videoCaptureRouter;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)blockExecuteInPosition:;
- (void)componentBindContext;
- (void)componentDidJoinChannel;
- (void)componentMount;
- (void)componentUnmount;
- (id)faceGiftExternalDescribe;
- (id)faceGiftExternalID;
- (double)playStickerTimestamp;
- (void)setPlayStickerTimestamp:;
- (void)setVideoCaptureRouter:;
- (id)validateToPlayFaceSticker;
- (id)videoCaptureRouter;
- (void).cxx_destruct;
@end
