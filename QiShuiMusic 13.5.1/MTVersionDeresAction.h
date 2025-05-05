@interface MTVersionDeresAction : MTTreatmentAction
@property (nonatomic) Q precision;
- (void)setPrecision:;
- (unsigned long long)precision;
- (id)performAction:context:;
- (id)initWithField:configDictionary:;
@end
