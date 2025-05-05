@interface PKInkProperties : NSObject
+ (id)functionNames;
+ (id)rangeForInkProperty:;
+ (id)rangeForInput:;
+ (double)defaultValueForInput:;
+ (id)blendModeNames;
+ (id)inkTypeNames;
+ (id)inkPropertyNames;
+ (id)inputMaskNames;
+ (id)inputNames;
+ (unsigned long long)functionTypeForName:;
+ (id)controlPointsForFunctionType:;
+ (unsigned long long)functionTypeForBezierControlPoints:;
+ (BOOL)bezierControlPoints:isEqual:;
+ (id)arrayForBezierControlPoints:;
@end
