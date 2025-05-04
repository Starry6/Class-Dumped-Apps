@interface AWEUGFreqControlsServiceImpl : HTSService
@property (nonatomic) MMKV mmkv;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setMmkv:;
- (id)mmkv;
- (BOOL)shouldTriggerEvent:withFreqControls:;
- (void)recordEventTriggered:;
- (void)clearAllEventRecord;
- (double)getCurrTime;
- (void)p_sortRecord:;
- (BOOL)p_checkShowFrequency:current:inRecord:maxCount:;
- (BOOL)p_checkElapsedTimeWithinRange:currTime:range:;
- (BOOL)p_canShowAtFrequency:withEventID:;
- (BOOL)p_canShowWithHideStrategy:eventID:;
- (void).cxx_destruct;
@end
