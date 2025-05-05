@interface DESJSONPredicate : NSObject
+ (BOOL)isNumber:;
+ (BOOL)isBoolean:;
+ (id)parseJSON:;
+ (id)fetchObjectAtPath:from:;
+ (id)parsePath:;
+ (BOOL)evaluateDefOp:onObj:;
+ (BOOL)evaluateStringOp:onObj:;
+ (BOOL)evaluateRegexOp:onObj:;
+ (BOOL)evaluateNumericOp:onObj:;
+ (BOOL)_testStrings:test:caseInsensitive:;
+ (BOOL)evaluateArrayOp:onObj:;
+ (BOOL)obj:matchesRegex:;
+ (BOOL)isDate:;
+ (BOOL)isDateTime:;
+ (BOOL)isTime:;
+ (BOOL)evaluateTypeOp:onObj:;
+ (BOOL)evaluateAnd:onObj:;
+ (BOOL)evaluateOr:onObj:;
+ (BOOL)evaluateBoolOp:onObj:;
+ (BOOL)evaluateDict:onObj:;
+ (BOOL)evaluatePredicate:onObj:;
+ (BOOL)evaluateJson:onJson:;
@end
