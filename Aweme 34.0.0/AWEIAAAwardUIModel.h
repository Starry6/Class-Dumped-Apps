@interface AWEIAAAwardUIModel : AWEBaseApiModel
@property (nonatomic) NSString titleFirstLine;
@property (nonatomic) NSString titleSecondLine;
@property (nonatomic) AWEURLModel coverURLModel;
@property (nonatomic) NSString confirmButtonText;
@property (nonatomic) NSString cancelButtonText;
@property (nonatomic) NSString confirmButtonTextGrowth;
@property (nonatomic) NSString toastTextGrowth;
@property (nonatomic) AWECodeGenGrowthTaskRewardConfigModel growthTaskRewardConfig;
- (id)coverURLModel;
- (void)setCoverURLModel:;
- (void)setConfirmButtonText:;
- (void)setTitleFirstLine:;
- (void)setTitleSecondLine:;
- (id)titleFirstLine;
- (id)titleSecondLine;
- (id)confirmButtonTextGrowth;
- (id)growthTaskRewardConfig;
- (id)toastTextGrowth;
- (void)setConfirmButtonTextGrowth:;
- (void)setToastTextGrowth:;
- (void)setGrowthTaskRewardConfig:;
- (void)setCancelButtonText:;
- (id)cancelButtonText;
- (void).cxx_destruct;
- (id)confirmButtonText;
+ (id)coverURLModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
