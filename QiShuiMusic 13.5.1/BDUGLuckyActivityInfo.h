@interface BDUGLuckyActivityInfo : BDUGLuckyJSONModel
@property (nonatomic) NSString activityId;
@property (nonatomic) NSString actHash;
@property (nonatomic) BOOL isUnionLogin;
- (id)actHash;
- (BOOL)isUnionLogin;
- (void)setActHash:;
- (void)setIsUnionLogin:;
- (void).cxx_destruct;
- (id)activityId;
- (void)setActivityId:;
+ (id)modelCustomPropertyMapper;
@end
