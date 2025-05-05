@interface IESIMLiveHonorInfoModel : IESIMBaseApiModel
@property (nonatomic) NSNumber honorLevel;
@property (nonatomic) NSNumber honorScore;
- (BOOL)hasUnlockedSecondaryBarrage;
- (BOOL)hasUnlockedSecondaryEntryAnimation;
- (id)honorLevel;
- (id)honorScore;
- (void)setHonorLevel:;
- (void)setHonorScore:;
- (id)init;
- (id)initWithDict:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
