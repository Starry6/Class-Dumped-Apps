@interface IESECGoodsInstallmentOpenInfoModel : IESECBaseApiModel
@property (nonatomic) BOOL shouldShow;
@property (nonatomic) NSString iconUrlStr;
@property (nonatomic) NSString openDesc;
@property (nonatomic) NSString openHint;
@property (nonatomic) NSString openUrlStr;
@property (nonatomic) NSString pageType;
@property (nonatomic) NSString activityType;
- (id)iconUrlStr;
- (id)openDesc;
- (id)openHint;
- (id)openUrlStr;
- (void)setIconUrlStr:;
- (void)setOpenDesc:;
- (void)setOpenHint:;
- (void)setOpenUrlStr:;
- (id)activityType;
- (void)setActivityType:;
- (void).cxx_destruct;
- (void)setPageType:;
- (id)pageType;
- (BOOL)shouldShow;
- (void)setShouldShow:;
+ (id)JSONKeyPathsByPropertyKey;
@end
