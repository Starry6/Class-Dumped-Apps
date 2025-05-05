@interface BDATMValueModel : NSObject
@property (nonatomic) NSString rawRule;
@property (nonatomic) Q valueType;
@property (nonatomic) NSString valueFieldType;
@property (nonatomic) @ defaultValue;
@property (nonatomic) @ realValue;
- (id)rawRule;
- (id)defaultValueWithRawValue:;
- (id)initWithRawRuleString:;
- (id)numberValueWithStringValue:;
- (id)realValueWithRuntimeValue:;
- (void)setRawRule:;
- (void)setValueFieldType:;
- (id)supportFieldTypes;
- (id)valueFieldType;
- (void)setValueType:;
- (void)setDefaultValue:;
- (id)defaultValue;
- (void).cxx_destruct;
- (unsigned long long)valueType;
- (id)realValue;
- (void)setRealValue:;
@end
