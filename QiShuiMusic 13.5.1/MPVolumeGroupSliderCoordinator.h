@interface MPVolumeGroupSliderCoordinator : NSObject
@property (nonatomic) MPVolumeSlider masterVolumeSlider;
@property (nonatomic) NSArray individualVolumeSliders;
@property (nonatomic) BOOL synced;
- (void)volumeSliderValueChanged:;
- (void)_removeControlEventsForVolumeSliders:;
- (id)individualVolumeSliders;
- (void)volumeSliderDidEndTracking:;
- (void)_addControlEventsForVolumeSlider:;
- (id)_findExistingVolumeSlider:;
- (void)_resetOptimisticScales;
- (void)_removeControlEventsForVolumeSlider:;
- (void)removeAllIndividualVolumeSliders;
- (void)removeIndividualVolumeSlider:;
- (id)initWithMasterVolumeSlider:individualVolumeSliders:;
- (float)_maxOptimisticValue;
- (BOOL)synced;
- (void)_updateOptimisticValueCache;
- (void)_addControlEventsForVolumeSliders:;
- (void).cxx_destruct;
- (void)_resetMasterVolumeSlider;
- (void)_setControlEventsForVolumeSlider:add:;
- (void)addIndividualVolumeSlider:;
- (void)syncSliders:;
- (id)masterVolumeSlider;
@end
