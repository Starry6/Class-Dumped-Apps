@interface AWEClientABRegisterModel : NSObject
@property (nonatomic) Q valueType;
@property (nonatomic) NSString propertyName;
@property (nonatomic) NSString experKey;
@property (nonatomic) NSArray groupIDs;
@property (nonatomic) NSArray flowRates;
@property (nonatomic) NSArray experValues;
@property (nonatomic) @ defaultValue;
@property (nonatomic) NSDictionary filters;
- (void)setExperKey:;
- (void)setGroupIDs:;
- (void)setFlowRates:;
- (void)setExperValues:;
- (id)experKey;
- (id)groupIDs;
- (id)flowRates;
- (id)experValues;
- (id)defaultValue;
- (void)setDefaultValue:;
- (id)filters;
- (void)setFilters:;
- (void)setValueType:;
- (unsigned long long)valueType;
- (void).cxx_destruct;
- (id)propertyName;
- (void)setPropertyName:;
@end
