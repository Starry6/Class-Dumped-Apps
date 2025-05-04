@interface AWELiveFeedbackCondition : AWEBaseApiModel
@property (nonatomic) q fromTime;
@property (nonatomic) q toTime;
@property (nonatomic) NSArray actionIdsArray;
@property (nonatomic) q actionType;
@property (nonatomic) q previewTime;
- (long long)fromTime;
- (long long)toTime;
- (id)actionIdsArray;
- (long long)previewTime;
- (void)setFromTime:;
- (void)setToTime:;
- (void)setActionIdsArray:;
- (void)setPreviewTime:;
- (long long)actionType;
- (void)setActionType:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
