@interface UIAccessibilitySafeCategory : NSObject
@property (nonatomic) NSString accessibilityIdentifier;
+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (id)_installSafeCategoryValidationMethod;
+ (id)_initializeSafeCategoryFromValidationManager;
+ (Class)safeCategoryTargetClass;
+ (void)safeCategoryAddDependenciesToCollection:;
+ (id)_installLocalValidationMethodOnClassNamed:;
+ (void)_installSafeCategoryOnClassNamed:;
+ (id)_installSafeCategoryOnClassNamed:isManaged:;
+ (id)_installSafeCategoryOnClass:isManaged:;
+ (void)_addCategoryMethods:count:excluding:count:toClass:isClass:;
@end
