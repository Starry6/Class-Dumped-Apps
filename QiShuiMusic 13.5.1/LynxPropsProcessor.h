@interface LynxPropsProcessor : NSObject
+ (void)handlePropSetterException:with:;
+ (void)extractPropSetterFromComponent:withName:withPropSetterHolder:;
+ (id)findPropSetterByComponent:andKey:;
+ (SEL)generateTypeSel:;
+ (id)getLynxPropsSetterHolder;
+ (id)getSetterMapFromComponent:;
+ (id)getSetterMapFromComponent:withPropSetterLookUp:;
+ (void)updateProp:withKey:forShadowNode:;
+ (void)updateProp:withKey:forUI:;
+ (id)wrapValueConversionWithType:forSetter:;
@end
