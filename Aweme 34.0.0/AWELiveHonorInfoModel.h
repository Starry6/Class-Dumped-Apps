@interface AWELiveHonorInfoModel : AWEBaseApiModel
@property (nonatomic) NSNumber honorLevel;
@property (nonatomic) NSNumber honorScore;
- (id)honorLevel;
- (BOOL)hasUnlockedSecondaryBarrage;
- (BOOL)hasUnlockedSecondaryEntryAnimation;
- (void)setHonorLevel:;
- (id)honorScore;
- (void)setHonorScore:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDict:;
+ (id)JSONKeyPathsByPropertyKey;
@end
