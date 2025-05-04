@interface AWECodeGenReCreationMatchedStartPlayInfoModel : AWEBaseDataModel
@property (nonatomic) q playEpisode;
@property (nonatomic) q playProgress;
- (long long)playProgress;
- (void)setPlayProgress:;
- (long long)playEpisode;
- (void)setPlayEpisode:;
+ (id)JSONKeyPathsByPropertyKey;
@end
