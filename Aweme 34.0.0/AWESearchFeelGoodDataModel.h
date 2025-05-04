@interface AWESearchFeelGoodDataModel : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) AWESearchFeelGoodEntranceIconModel iconModel;
@property (nonatomic) q showTipsType;
@property (nonatomic) double showTipsDurationMS;
@property (nonatomic) double showTipsStartDelayMS;
@property (nonatomic) NSString search_type;
@property (nonatomic) AWESearchFeelGoodSurveyTaskModel surveyTask;
- (id)surveyTask;
- (long long)showTipsType;
- (double)showTipsStartDelayMS;
- (double)showTipsDurationMS;
- (void)setShowTipsType:;
- (void)setShowTipsDurationMS:;
- (void)setShowTipsStartDelayMS:;
- (id)search_type;
- (void)setSearch_type:;
- (void)setSurveyTask:;
- (id)subtitle;
- (void)setSubtitle:;
- (void).cxx_destruct;
- (id)title;
- (void)setIconModel:;
- (void)setTitle:;
- (id)iconModel;
@end
