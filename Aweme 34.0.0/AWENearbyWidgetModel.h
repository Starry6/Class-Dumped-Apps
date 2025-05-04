@interface AWENearbyWidgetModel : AWEBaseApiModel
@property (nonatomic) NSString widgetID;
@property (nonatomic) NSString jumpURL;
@property (nonatomic) AWEURLModel imgURL;
@property (nonatomic) AWEURLModel smallImgURL;
@property (nonatomic) NSString reportParams;
@property (nonatomic) NSString activityID;
@property (nonatomic) NSString widgetType;
@property (nonatomic) NSString trackParams;
- (id)trackParams;
- (void)setTrackParams:;
- (id)jumpURL;
- (void)setJumpURL:;
- (id)reportParams;
- (void)setReportParams:;
- (id)imgURL;
- (void)setImgURL:;
- (BOOL)hasWidgetData;
- (id)smallImgURL;
- (void)setSmallImgURL:;
- (void)setWidgetType:;
- (id)widgetType;
- (void).cxx_destruct;
- (id)activityID;
- (void)setActivityID:;
- (void)setWidgetID:;
- (id)widgetID;
+ (id)JSONKeyPathsByPropertyKey;
@end
