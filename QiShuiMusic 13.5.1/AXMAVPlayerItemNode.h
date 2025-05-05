@interface AXMAVPlayerItemNode : AXMSourceNode
@property (nonatomic) AVPlayerItem targetPlayerItem;
@property (nonatomic) AXMVisionAnalysisOptions analysisOptions;
@property (nonatomic) BOOL triggeringLegibilityEvents;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (void)outputSequenceWasFlushed:;
- (void)legibleOutput:didOutputAttributedStrings:nativeSampleBuffers:forItemTime:;
- (void)nodeInitialize;
- (id)axmDescription;
- (void)setShouldProcessRemotely:;
- (id)analysisOptions;
- (void)setAnalysisOptions:;
- (void)autoTriggerLegibilityEventsWithAVPlayerItem:;
- (void)_mainQueue_endAutoTriggerOfLegibilityEvents;
- (void)endAutoTriggerOfLegibilityEvents;
- (BOOL)isTriggeringLegibilityEvents;
- (id)targetPlayerItem;
- (void)setTargetPlayerItem:;
+ (BOOL)isSupported;
+ (BOOL)supportsSecureCoding;
+ (id)title;
@end
