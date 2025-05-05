@interface HMDUITrackableContext : NSObject
@property (nonatomic) <HMDUITrackable> trackable;
@property (nonatomic) NSString trackName;
@property (nonatomic) NSDictionary analysisInfo;
@property (nonatomic) q trackableState;
- (void)setAnalysisInfo:;
- (void)setTrackable:;
- (void)setTrackableState:;
- (id)trackable;
- (void)trackableDidAppear;
- (void)trackableDidDisappear;
- (void)trackableDidLoadWithDuration:;
- (void)trackableDidSelectItemAtIndexPath:;
- (void)trackableDidTrigger:;
- (void)trackableDidUnload;
- (void)trackableEvent:info:;
- (long long)trackableState;
- (void)trackableWillAppear;
- (void)trackableWillDisappear;
- (void).cxx_destruct;
- (id)analysisInfo;
- (id)trackName;
- (void)setTrackName:;
@end
