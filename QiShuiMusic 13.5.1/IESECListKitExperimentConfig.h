@interface IESECListKitExperimentConfig : MTLModel
@property (nonatomic) NSArray abTestKeyList;
@property (nonatomic) NSArray settingsKeyList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)settingsKeyList;
- (id)abTestKeyList;
- (void)setAbTestKeyList:;
- (void)setSettingsKeyList:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
