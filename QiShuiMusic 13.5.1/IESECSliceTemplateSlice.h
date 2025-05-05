@interface IESECSliceTemplateSlice : MTLModel
@property (nonatomic) NSString templateTypeStr;
@property (nonatomic) Q type;
@property (nonatomic) NSDictionary rawTemplate;
@property (nonatomic) NSString refTemplate;
@property (nonatomic) NSString geckoURL;
@property (nonatomic) NSString name;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setRawTemplate:;
- (id)templateTypeStr;
- (void)setRefTemplate:;
- (id)geckoURL;
- (id)rawTemplate;
- (id)refTemplate;
- (void)setGeckoURL:;
- (void)setTemplateTypeStr:;
- (void)setName:;
- (void)setType:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)name;
+ (id)JSONKeyPathsByPropertyKey;
@end
