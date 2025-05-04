@interface AWECommonButtonInfoModel : MTLModel
@property (nonatomic) AWECommonButtonBasicInfoModel basicInfo;
@property (nonatomic) NSNumber priority;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)basicInfo;
- (void)setBasicInfo:;
- (id)priority;
- (void)setPriority:;
- (void).cxx_destruct;
+ (id)basicInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
