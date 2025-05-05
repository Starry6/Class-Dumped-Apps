@interface TIAnalyticsStringFieldSpec : TIAnalyticsFieldSpec
@property (nonatomic) NSArray allowedValues;
- (BOOL)validate:error:;
- (void).cxx_destruct;
- (id)allowedValues;
- (id)initWithName:allowedValues:;
@end
