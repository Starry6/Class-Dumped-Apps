@interface AWECommentAttitudeModel : AWEBaseApiModel
@property (nonatomic) BOOL hasAttitude;
@property (nonatomic) NSString attitudeType;
@property (nonatomic) NSDictionary attitudeAuditMap;
@property (nonatomic) NSDictionary attitudeCountMap;
- (id)attitudeType;
- (void)setAttitudeType:;
- (id)attitudeAuditMap;
- (void)setAttitudeAuditMap:;
- (id)attitudeCountMap;
- (void)setAttitudeCountMap:;
- (void).cxx_destruct;
- (BOOL)hasAttitude;
- (void)setHasAttitude:;
+ (id)JSONKeyPathsByPropertyKey;
@end
