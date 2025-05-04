@interface AWECodeGenPopUpConfModel : AWEBaseDataModel
@property (nonatomic) NSString popUpSchema;
@property (nonatomic) q curSceneNextCanApplyTimestampt;
@property (nonatomic) NSInteger isHitSpringFestival;
@property (nonatomic) q popUpType;
- (id)popUpSchema;
- (void)setPopUpSchema:;
- (long long)curSceneNextCanApplyTimestampt;
- (void)setCurSceneNextCanApplyTimestampt:;
- (int)isHitSpringFestival;
- (void)setIsHitSpringFestival:;
- (long long)popUpType;
- (void)setPopUpType:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
