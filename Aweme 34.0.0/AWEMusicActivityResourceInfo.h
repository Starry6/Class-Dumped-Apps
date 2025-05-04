@interface AWEMusicActivityResourceInfo : MTLModel
@property (nonatomic) NSString configurationId;
@property (nonatomic) NSString configurationType;
@property (nonatomic) NSString link;
@property (nonatomic) NSString icon;
@property (nonatomic) BOOL skipFrequencyControl;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)skipFrequencyControl;
- (id)configurationId;
- (void)setConfigurationId:;
- (void)setSkipFrequencyControl:;
- (id)configurationType;
- (id)icon;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)link;
- (void)setLink:;
- (void)setConfigurationType:;
+ (id)JSONKeyPathsByPropertyKey;
@end
