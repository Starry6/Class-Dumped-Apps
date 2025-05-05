@interface EDAccountECAccountTransformer : NSValueTransformer
- (id)transformedValue:;
- (id)transformAccount:;
- (id)transformReceivingAccount:;
- (id)transformDeliveryAccount:;
+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;
@end
