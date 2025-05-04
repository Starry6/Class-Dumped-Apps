@interface AWEHPTabGuidePitayaResponseModel : MTLModel
@property (nonatomic) NSString actionName;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString version;
@property (nonatomic) NSArray awemeResultList;
@property (nonatomic) NSString pitayaTraceID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEnterFrom:;
- (id)enterFrom;
- (id)pitayaTraceID;
- (id)awemeResultList;
- (void)setPitayaTraceID:;
- (void)setAwemeResultList:;
- (id)actionName;
- (id)version;
- (void)setVersion:;
- (void).cxx_destruct;
- (void)setActionName:;
+ (id)awemeResultListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
