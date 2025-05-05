@interface IESLiveGiftTraySlideRateConfig : MTLModel
@property (nonatomic) BOOL enable;
@property (nonatomic) NSNumber type;
@property (nonatomic) NSArray hotConfigs;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)hotConfigs;
- (void)setHotConfigs:;
- (BOOL)enable;
- (void)setType:;
- (id)type;
- (void).cxx_destruct;
- (void)setEnable:;
+ (id)hotConfigsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
