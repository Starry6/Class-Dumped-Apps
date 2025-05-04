@interface AWECodeGenCommonSubscribePopStModel : AWEBaseDataModel
@property (nonatomic) AWECodeGenServiceAccountModel serviceAccountModel;
@property (nonatomic) NSString popScene;
@property (nonatomic) q popType;
@property (nonatomic) NSString textAfterSub;
@property (nonatomic) NSString iconUrlAfterSub;
@property (nonatomic) NSString textAfterUnsub;
@property (nonatomic) NSString bigTextAfterSub;
- (void)setPopType:;
- (long long)popType;
- (void)setServiceAccountModel:;
- (id)serviceAccountModel;
- (id)iconUrlAfterSub;
- (id)bigTextAfterSub;
- (id)textAfterSub;
- (id)textAfterUnsub;
- (id)popScene;
- (void)setPopScene:;
- (void)setTextAfterSub:;
- (void)setIconUrlAfterSub:;
- (void)setTextAfterUnsub:;
- (void)setBigTextAfterSub:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
