@interface SISensitiveConditionsSet : NSObject
- (void)addCondition:;
- (id)init;
- (BOOL)isEmpty;
- (void)removeConditions:;
- (unsigned long long)hash;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)addDeviceSensitivityState:;
- (id)initWithBitMask:;
- (void)removeDeviceSensitivityState:;
- (BOOL)isConditionSet:;
- (BOOL)isDeviceSensitivityStateSet:;
- (BOOL)intersectsWith:;
- (BOOL)isEqualToConditionsSet:;
- (id)unionSetWith:;
- (id)differenceSetFrom:;
- (id)intersectionSetWith:;
+ (id)fromDeviceSensitivityState:;
@end
