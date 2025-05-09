@interface IESEffectVideoAnimatedRenderer : NSObject
@property (nonatomic) ^v engineHandler;
@property (nonatomic) EffectCanvasHandler canvasObject;
@property (nonatomic) NSDictionary canvasHandlerMap;
@property (nonatomic) NSString identifier;
@property (nonatomic) HTSGLContext context;
- (void)activeCanvasHandlerForKey:animation:;
- (id)canvasHandlerMap;
- (id)canvasObject;
- (void)checkEffectError:msg:;
- (void)destoryCanvasHandlerForKey:;
- (id)engineHandler;
- (id)getCanvasKeyFrameInfo:;
- (id)getCanvasKeyFrameInfo:withTrackID:;
- (id)initWithCanvasSize:;
- (id)initWithCanvasSize:identifier:;
- (void)removeAllCanvasKeyFrames;
- (void)removeAllCanvasKeyFramesWithTrackID:;
- (void)setCanvasHandlerMap:;
- (void)setCanvasObject:;
- (void)setEngineHandler:;
- (void)setkeyFrameInfoWrapper:;
- (void)updateCanvasAnimation:;
- (void)updateVideoAnimatedParams:;
- (id)init;
- (void)dealloc;
- (id)context;
- (id)identifier;
- (void).cxx_destruct;
- (void)setContext:;
- (void)setIdentifier:;
@end
