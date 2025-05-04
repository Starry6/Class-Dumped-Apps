@interface AWEDetailTrendHeadTitleModel : AWEDetailCommonDiffableModel
@property (nonatomic) AWEURLModel iconUrl;
@property (nonatomic) NSString subTitleString;
@property (nonatomic) NSString titleString;
@property (nonatomic) BOOL isHotTrend;
@property (nonatomic) BOOL hasTrendIcon;
@property (nonatomic) BOOL hasTrendDescription;
@property (nonatomic) AWEHotTrendsLabelModel hotLabel;
- (id)iconUrl;
- (void)setIconUrl:;
- (void)setHotLabel:;
- (id)hotLabel;
- (BOOL)isHotTrend;
- (void)setHasTrendIcon:;
- (void)setIsHotTrend:;
- (void)setHasTrendDescription:;
- (BOOL)hasTrendIcon;
- (void).cxx_destruct;
- (void)setTitleString:;
- (void)setSubTitleString:;
- (id)subTitleString;
- (id)titleString;
- (BOOL)hasTrendDescription;
@end
