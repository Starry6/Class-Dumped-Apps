@interface AnnieXLynxTimingModel : MTLModel
@property (nonatomic) AnnieXLynxSetupTimingModel setupTiming;
@property (nonatomic) AnnieXLynxUpdateTimingModel updateTiming;
@property (nonatomic) double loadAppEnd;
@property (nonatomic) double setupDrawEnd;
@property (nonatomic) double updateDrawEnd;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSetupTiming:;
- (void)collectSetupTiming:;
- (void)collectUpdateTiming:;
- (double)loadAppEnd;
- (void)setUpdateTiming:;
- (double)setupDrawEnd;
- (id)setupTiming;
- (double)updateDrawEnd;
- (id)updateTiming;
- (id)init;
- (void).cxx_destruct;
@end
