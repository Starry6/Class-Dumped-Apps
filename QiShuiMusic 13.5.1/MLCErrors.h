@interface MLCErrors : NSObject
+ (id)createErrorWithCode:description:;
+ (id)invalidStateErrorForMethod:description:;
+ (id)invalidInputErrorForMethod:description:;
@end
