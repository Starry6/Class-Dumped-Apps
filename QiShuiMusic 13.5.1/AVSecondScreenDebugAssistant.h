@interface AVSecondScreenDebugAssistant : NSObject
@property (nonatomic) CADisplay debugInfoDisplay;
@property (nonatomic) AVObservationController observationController;
@property (nonatomic) AVPlayer player;
@property (nonatomic) UIScene scene;
@property (nonatomic) NSString debugText;
@property (nonatomic) AVSecondScreenViewController secondScreenViewController;
- (void)setDebugText:;
- (id)init;
- (void)setScene:;
- (void)dealloc;
- (id)observationController;
- (id)debugText;
- (void)setObservationController:;
- (id)scene;
- (id)player;
- (void).cxx_destruct;
- (void)setPlayer:;
- (id)debugInfoDisplay;
- (void)setDebugInfoDisplay:;
- (void)setSecondScreenViewController:;
- (id)_currentEnabledVideoTrack;
- (id)_currentDisplay;
- (id)_currentVideoDynamicRange;
- (void)_updateDebugLabelText;
- (void)_actuallyUpdateDebugLabelTextWithCurrentResolution:currentVideoDynamicRange:;
- (id)secondScreenViewController;
@end
