@interface AWETrackerParamsPassThroughBlock : NSObject
@property (nonatomic) NSMutableSet overrideKeyWhiteList;
@property (nonatomic) AWETrackerDataTransmissionBlockConfig config;
@property (nonatomic) BOOL shouldEnableParamsOverride;
@property (nonatomic) NSDictionary applyComparedResultCache;
@property (nonatomic) double applyDurationCache;
@property (nonatomic) double applyTimeStamp;
- (double)applyTimeStamp;
- (void)setApplyTimeStamp:;
- (void)applyBlockWithEvent:params:trackerContext:;
- (void)didAttachToObj:fromInfo:;
- (void)setShouldEnableParamsOverride:;
- (void)enableParamsOverrideForKey:;
- (void)setOverrideKeyWhiteList:;
- (void)setApplyDurationCache:;
- (void)setApplyComparedResultCache:;
- (id)applyComparedResultCache;
- (id)overrideKeyWhiteList;
- (BOOL)shouldEnableParamsOverride;
- (double)applyDurationCache;
- (void)setConfig:;
- (id)init;
- (id)initWithConfig:;
- (id)config;
- (void).cxx_destruct;
- (id)copyWithZone:;
+ (id)initWithConfig:;
@end
