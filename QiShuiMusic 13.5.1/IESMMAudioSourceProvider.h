@interface IESMMAudioSourceProvider : IESMMObject
@property (nonatomic) NSMutableArray filters;
@property (nonatomic) NSMutableDictionary filterRangeInfo;
@property (nonatomic) <IESMMAudioProcessorExProtocol> audioProcess;
@property (nonatomic) q tapProcessStatus;
@property (nonatomic) {?={?=qiIq}{?=qiIq}} effectiveRange;
@property (nonatomic) r^{opaqueMTAudioProcessingTap=} tap;
- (id)filterRangeInfo;
- (void)addFilter:forRange:;
- (void)addFiltersArray:forRange:;
- (id)allFilters;
- (id)audioProcess;
- (void)changAudioEffectProcess:;
- (void)process:withTimeRange:;
- (void)processProc:withTimeRange:;
- (void)setAudioProcess:;
- (void)setEffectiveRange:;
- (void)setFilterRangeInfo:;
- (void)setTapProcessStatus:;
- (long long)tapProcessStatus;
- (void)resetStatus;
- (id)filters;
- (id)init;
- (void)dealloc;
- (void)setFilters:;
- (void).cxx_destruct;
- (void)removeFilter:;
- (id)tap;
- (id)effectiveRange;
+ (id)sharedExportInstance;
+ (id)sharedInstance;
@end
