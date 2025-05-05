@interface TIAnalyticsFieldSpec : NSObject
@property (nonatomic) NSString name;
- (BOOL)validate:error:;
- (id)initWithName:;
- (void).cxx_destruct;
- (id)name;
- (id)errorFromNil;
- (id)errorFromValue:code:message:;
+ (id)integerFieldSpecWithName:minValue:;
+ (id)floatFieldSpecWithName:minValue:maxValue:;
+ (id)integerFieldSpecWithName:minValue:maxValue:significantDigits:;
+ (id)floatFieldSpecWithName:minValue:;
+ (id)floatFieldSpecWithName:minValue:maxValue:significantDigits:;
+ (id)booleanFieldSpecWithName:;
+ (id)integerFieldSpecWithName:maxValue:;
+ (id)integerFieldSpecWithName:minValue:maxValue:;
+ (id)floatFieldSpecWithName:;
+ (id)integerFieldSpecWithName:;
+ (id)floatFieldSpecWithName:maxValue:;
+ (id)stringFieldSpecWithName:;
+ (id)stringFieldSpecWithName:allowedValues:;
@end
