@interface BDUGLuckyDogActivityInfo : BDUGLuckyJSONModel
@property (nonatomic) NSString activityId;
@property (nonatomic) NSString actHash;
@property (nonatomic) BOOL isUnionLogin;
- (id)actHash;
- (BOOL)isUnionLogin;
- (void)setActHash:;
- (void)setIsUnionLogin:;
- (id)initWithDictionary:error:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)activityId;
- (void)setActivityId:;
@end
