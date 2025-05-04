@interface AWECodeGenLongPressPanelResponse : AWEBaseResponseModel
@property (nonatomic) NSArray panelConfigsModelArray;
@property (nonatomic) NSArray effectiveArray;
@property (nonatomic) NSString dataHash;
- (id)effectiveArray;
- (id)panelConfigsModelArray;
- (void)setPanelConfigsModelArray:;
- (void)setEffectiveArray:;
- (id)dataHash;
- (void).cxx_destruct;
- (void)setDataHash:;
+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;
@end
