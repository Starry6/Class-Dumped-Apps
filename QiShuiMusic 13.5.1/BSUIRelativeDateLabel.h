@interface BSUIRelativeDateLabel : BSUIDefaultDateLabel
@property (nonatomic) BSRelativeDateTimerFireInfo overrideTimerFireInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_timelinesForDateInterval:completion:;
- (void)_updateWithFrameSpecifier:completion:;
- (void)setTimeZoneRelativeStartDate:absoluteStartDate:;
- (id)constructLabelString;
- (id)_overrideTimerFireInfo;
- (void)dealloc;
- (void)prepareForReuse;
- (void)_setOverrideTimerFireInfo:;
- (void)timerFiredWithValue:forResolution:comparedToNow:;
- (void)_updateWithFrameSpecifier:;
- (id)_timelinesForDateInterval:;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)willMoveToWindow:;
@end
