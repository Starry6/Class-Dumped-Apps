@interface BSAbstractDefaultDomain : NSObject
- (id)init;
- (void)dealloc;
- (id)_store;
- (void)_setUserDefaults:;
- (id)_initWithDomain:;
- (void).cxx_destruct;
- (id)description;
- (void)_bindProperty:withDefaultKey:toDefaultValue:options:;
- (void)_bindAndRegisterDefaults;
- (id)_initWithDefaults:;
- (void)synchronizeDefaults;
- (id)observeDefault:onQueue:withBlock:;
- (id)observeDefaults:onQueue:withBlock:;
- (void)resetAllDefaults;
- (void)_bindProperty:withDefaultKey:;
- (void)_bindProperty:withDefaultKey:toDefaultValue:;
+ (BOOL)__useDynamicMethodResolution;
@end
