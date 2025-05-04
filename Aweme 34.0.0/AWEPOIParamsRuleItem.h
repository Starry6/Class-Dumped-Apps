@interface AWEPOIParamsRuleItem : MTLModel
@property (nonatomic) NSString name;
@property (nonatomic) NSString errorMsg;
@property (nonatomic) NSString owner;
@property (nonatomic) NSString version;
@property (nonatomic) NSString iOSVersion;
@property (nonatomic) NSArray paramConfigs;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setErrorMsg:;
- (id)errorMsg;
- (id)paramConfigs;
- (void)setParamConfigs:;
- (void)setOwner:;
- (id)version;
- (id)iOSVersion;
- (id)owner;
- (void)setVersion:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (void)setIOSVersion:;
+ (id)paramConfigsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
