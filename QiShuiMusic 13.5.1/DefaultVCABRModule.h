@interface DefaultVCABRModule : NSObject
@property (nonatomic) ^v module;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addBufferInfo:streamKey:bitrate:availSize:headSize:;
- (void)configWithParams:;
- (id)getPredict;
- (id)initWithAlgoType:;
- (id)onceSelect:scene:;
- (void)setDoubleValue:forKey:;
- (void)setFloatValue:forKey:;
- (void)setInfoListener:;
- (void)setIntValue:forKey:;
- (void)setLongValue:forKey:;
- (void)setMediaInfo:withAudio:;
- (void)start:intervalMs:;
- (void)setDeviceInfo:;
- (id)module;
- (void)dealloc;
- (void)stop;
- (void)setStringValue:forKey:;
- (void)setModule:;
@end
