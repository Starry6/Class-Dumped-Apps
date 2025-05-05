@interface IESLiveSaaSFeedTabModel : BDDynamicMTLModel
@property (nonatomic) NSArray subTabConfigs;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) NSString gdLabel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setGdLabel:;
- (id)gdLabel;
- (void)setEnterMethod:;
- (id)enterMethod;
- (void)setEnterFrom:;
- (id)enterFrom;
- (void)setSubTabConfigs:;
- (id)subTabConfigs;
- (id)buildSubTabModels;
- (BOOL)isSubTabVaild;
+ (id)tabConfigsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
