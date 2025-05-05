@interface ISLivePhotoVitalityFilter : NSObject
@property (nonatomic) BOOL isPerformingInputChanges;
@property (nonatomic) BOOL _shouldUpdateOutput;
@property (nonatomic) <ISVitalitySettings> settings;
@property (nonatomic) q state;
@property (nonatomic) @? outputChangeHandler;
- (id)init;
- (id)settings;
- (void)setState:;
- (id)initWithSettings:;
- (long long)state;
- (void).cxx_destruct;
- (void)invalidateOutput;
- (void)updateOutput;
- (BOOL)isPerformingInputChanges;
- (void)_setPerformingInputChanges:;
- (void)performInputChanges:;
- (id)outputChangeHandler;
- (void)setOutputChangeHandler:;
- (BOOL)_shouldUpdateOutput;
- (void)_setShouldUpdateOutput:;
@end
