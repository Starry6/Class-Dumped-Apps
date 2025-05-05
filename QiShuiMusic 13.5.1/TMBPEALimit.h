@interface TMBPEALimit : NSObject
@property (nonatomic) NSDictionary presetCertLimits;
@property (nonatomic) NSDictionary presetAuthmap;
@property (nonatomic) NSDictionary dynamicList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDynamicList:;
- (id)dynamicList;
- (id)presetAuthmap;
- (id)presetCertLimits;
- (void)setPresetAuthmap:;
- (void)setPresetCertLimits:;
- (void)setupPresetAuthMap:;
- (void)setupPresetLimitConfig:;
- (void)setupWithConfig:;
- (void)updateConfig:;
- (id)init;
- (void).cxx_destruct;
@end
