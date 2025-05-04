@interface AWEStudioFeatureFrameRatioItem : AWEStudioFeatureStatusBaseItem
@property (nonatomic) Q defaultRatio;
@property (nonatomic) NSMutableDictionary p_ratioToFrameDict;
@property (nonatomic) BOOL p_isSaving;
@property (nonatomic) BOOL p_isScheduledForSave;
@property (nonatomic) Q initialRatio;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)defaultRatio;
- (void)setDefaultRatio:;
- (id)p_ratioToFrameDict;
- (void)p_saveToStorageNow;
- (BOOL)p_isSaving;
- (BOOL)p_isScheduledForSave;
- (void)setP_isScheduledForSave:;
- (void)p_executeSave;
- (void)setP_isSaving:;
- (id)initWithStorage:persistenceKey:defaultRatio:;
- (void)saveRatio:forRecordModeID:;
- (unsigned long long)ratioForRecordModeID:;
- (unsigned long long)initialRatio;
- (void)setInitialRatio:;
- (void)loadInitilRatio;
- (void)setP_ratioToFrameDict:;
- (void).cxx_destruct;
@end
