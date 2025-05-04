@interface AWEIMPerfFPSMonitorWrapper : NSObject
@property (nonatomic) AWEPerfFPSMonitor fpsMonitor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)endSceneWithName:context:;
- (void)beginSceneWithName:context:;
- (id)fpsMonitor;
- (id)__dictOfRecord:stageSuffix:;
- (id)__key:suffix:;
- (id)phaseDictWithSceneName:context:;
- (void)updateExtra:withSceneName:;
- (void)setFpsMonitor:;
- (void).cxx_destruct;
@end
