@interface IESIMPOIAwemeTagRateInfoModel : MTLModel
@property (nonatomic) NSString rateId;
@property (nonatomic) IESIMPOISimpleUserInfo userInfo;
@property (nonatomic) NSString rateContent;
@property (nonatomic) IESIMPOITagRateGradeModel rateGrade;
@property (nonatomic) q createMsTime;
@property (nonatomic) NSString lynxUrl;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setRateContent:;
- (id)lynxUrl;
- (long long)createMsTime;
- (id)rateContent;
- (id)rateGrade;
- (id)rateId;
- (void)setCreateMsTime:;
- (void)setLynxUrl:;
- (void)setRateGrade:;
- (void)setRateId:;
- (id)userInfo;
- (void)setUserInfo:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
