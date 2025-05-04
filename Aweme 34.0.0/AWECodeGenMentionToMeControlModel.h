@interface AWECodeGenMentionToMeControlModel : AWEBaseDataModel
@property (nonatomic) q relation;
@property (nonatomic) NSInteger showSwitch;
- (int)showSwitch;
- (void)setShowSwitch:;
- (void)setRelation:;
- (long long)relation;
+ (id)JSONKeyPathsByPropertyKey;
@end
