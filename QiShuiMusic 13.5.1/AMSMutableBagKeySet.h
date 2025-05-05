@interface AMSMutableBagKeySet : AMSBagKeySet
- (void)addBagKey:valueType:;
- (void)unionBagKeySet:;
- (void)addBagKey:valueType:defaultValue:;
@end
