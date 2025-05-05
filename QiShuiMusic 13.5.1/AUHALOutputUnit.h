@interface AUHALOutputUnit : AUAudioUnitV2Bridge
@property (nonatomic) BOOL inputEnabled;
@property (nonatomic) BOOL outputEnabled;
- (void)dealloc;
- (long long)tokenByAddingRenderObserver:;
- (id)outputProvider;
- (id)_inputHandler;
- (void)initAUHALOutputUnit;
- (BOOL)isRunning;
- (BOOL)isOutputEnabled;
- (void)setOutputProvider:;
- (id)initWithAudioUnit:description:;
- (int)enableBus:scope:enable:;
- (void)setInputHandler:;
- (void).cxx_destruct;
- (void)removeRenderObserver:;
- (BOOL)canPerformOutput;
- (BOOL)startHardwareAndReturnError:;
- (void)setInputEnabled:;
- (BOOL)canPerformInput;
- (void)stopHardware;
- (id)initWithComponentDescription:options:error:;
- (void)removeRenderObserver:userData:;
- (void)addRenderObserver:userData:;
- (BOOL)isInputEnabled;
- (id).cxx_construct;
- (void)setOutputEnabled:;
@end
