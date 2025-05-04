@interface AWECodeGenInteractiveDisableInfoModel : AWEBaseDataModel
@property (nonatomic) NSString disableDetails;
@property (nonatomic) AWECodeGenInteractiveDisableDialogModel disableDialogInfoModel;
@property (nonatomic) BOOL hasEntrance;
@property (nonatomic) BOOL disableLeftSlide;
- (id)disableDialogInfoModel;
- (BOOL)hasEntrance;
- (BOOL)disableLeftSlide;
- (void)setHasEntrance:;
- (id)disableDetails;
- (void)setDisableDetails:;
- (void)setDisableDialogInfoModel:;
- (void)setDisableLeftSlide:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
