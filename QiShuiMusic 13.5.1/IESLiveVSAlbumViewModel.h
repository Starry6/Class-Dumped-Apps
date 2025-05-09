@interface IESLiveVSAlbumViewModel : NSObject
@property (nonatomic) <IESLiveRoomServiceAdapter> room;
@property (nonatomic) HTSLiveEpisodeExtraInfo episodeExtra;
@property (nonatomic) BOOL showLiveAlbum;
@property (nonatomic) BOOL orientationTransition;
@property (nonatomic) BOOL needPlayNext;
@property (nonatomic) BOOL needPlayNextByClick;
@property (nonatomic) NSString albumURL;
@property (nonatomic) <IESLiveContainerRouterAdapter> containerRouter;
@property (nonatomic) <IESLiveURLSchemaHandlerAdapter> schemaHandler;
@property (nonatomic) IESLiveComponentContext componentContext;
@property (nonatomic) HTSEventContext trackContext;
@property (nonatomic) NSMutableAttributedString nextAlbumAttrText;
@property (nonatomic) BOOL showAlbum;
@property (nonatomic) BOOL hasShowPortraitAlbum;
@property (nonatomic) BOOL hasShowLandscapeAlbum;
@property (nonatomic) BOOL hasShowNext;
@property (nonatomic) BOOL firstPlayHasFinished;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onVideoProgressUpdate:duration:;
- (void)setHasShowNext:;
- (BOOL)canDraw;
- (id)containerRouter;
- (void)openAlbumSchema;
- (id)albumURL;
- (void)clickPlayNext;
- (id)componentContext;
- (void)didSetAttachingDIContext;
- (void)didUpdateEpisode:;
- (void)didUpdateRoom:;
- (id)episodeExtra;
- (BOOL)firstPlayHasFinished;
- (void)handleOrientationTransitionBegin;
- (void)handleOrientationTransitionEnd;
- (BOOL)hasNextPeriod;
- (BOOL)hasShowLandscapeAlbum;
- (BOOL)hasShowNext;
- (BOOL)hasShowPortraitAlbum;
- (BOOL)isFromTopLive;
- (void)jumpNextRoom;
- (BOOL)needForceUpdateToPortraitInVerticalStream;
- (BOOL)needPlayNext;
- (BOOL)needPlayNextByClick;
- (id)nextAlbumAttrText;
- (void)onSeekEnd;
- (BOOL)orientationTransition;
- (id)schemaHandler;
- (void)setAlbumURL:;
- (void)setComponentContext:;
- (void)setContainerRouter:;
- (void)setEpisodeExtra:;
- (void)setFirstPlayHasFinished:;
- (void)setHasShowLandscapeAlbum:;
- (void)setHasShowPortraitAlbum:;
- (void)setNeedPlayNext:;
- (void)setNeedPlayNextByClick:;
- (void)setOrientationTransition:;
- (void)setSchemaHandler:;
- (void)setShowLiveAlbum:;
- (void)setTrackContext:;
- (BOOL)showAlbum;
- (BOOL)showLiveAlbum;
- (id)trackContext;
- (id)init;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:;
- (BOOL)hasNext;
- (void)playNext;
@end
