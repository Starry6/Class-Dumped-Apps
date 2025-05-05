@interface MLMetricKey : MLKey
- (id)initWithKeyName:;
+ (id)lossValue;
+ (id)epochIndex;
+ (id)miniBatchIndex;
@end
