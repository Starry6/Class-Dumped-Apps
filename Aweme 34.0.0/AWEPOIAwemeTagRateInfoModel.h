@interface AWEPOIAwemeTagRateInfoModel : MTLModel
@property (nonatomic) BOOL isUnfolded;
@property (nonatomic) NSString rateId;
@property (nonatomic) AWEPOISimpleUserInfo userInfo;
@property (nonatomic) NSString rateContent;
@property (nonatomic) AWEPOITagRateGradeModel rateGrade;
@property (nonatomic) q createMsTime;
@property (nonatomic) NSString lynxUrl;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)lynxUrl;
- (id)rateGrade;
- (id)rateId;
- (void)setLynxUrl:;
- (void)setRateId:;
- (id)rateContent;
- (void)setRateContent:;
- (void)setRateGrade:;
- (long long)createMsTime;
- (void)setCreateMsTime:;
- (void)setIsUnfolded:;
- (BOOL)isUnfolded;
- (void)setUserInfo:;
- (id)userInfo;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
