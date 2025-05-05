@interface FRCFrameSynthesizer : NSObject
- (void)dealloc;
- (void)allocateResources;
- (void)releaseResources;
- (void).cxx_destruct;
- (id)errorWithErrorCode:;
- (id)initWithUsage:;
- (id)initWithUsage:qualityMode:;
- (BOOL)configureSynthesisWithMode:;
- (void)synthesizeFrameFromFirstFrame:secondFrame:forwardFlow:backwardFlow:timeScale:destination:;
- (void)setFirstFrame:secondFrame:forwardFlow:backwardFlow:;
- (void)synthesizeFrameForTimeScale:destination:;
- (id)synthesizeFramesFromFirstFrame:secondFrame:forwardFlow:backwardFlow:numberOfFrames:withError:;
- (id)synthesizeFramesFromFirstFrame:secondFrame:forwardFlow:backwardFlow:timeScales:withError:;
- (BOOL)checkForwardFlow:backwardFlow:;
@end
