@interface IESLiveBigPartyResumeFromPKData : NSObject
@property (nonatomic) IESLiveInteractiveMediaService mediaService;
@property (nonatomic) IESLiveInteractionGuestPreviewView previewView;
@property (nonatomic) BOOL hasSwitchSceneMessage;
@property (nonatomic) HTSLiveLinkMicMethod switchSceneMessage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)hasSwitchSceneMessage;
- (void)setHasSwitchSceneMessage:;
- (void)setSwitchSceneMessage:;
- (id)switchSceneMessage;
- (id)previewView;
- (void).cxx_destruct;
- (void)setPreviewView:;
- (id)mediaService;
- (void)setMediaService:;
@end
