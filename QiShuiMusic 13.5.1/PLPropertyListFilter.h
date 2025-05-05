@interface PLPropertyListFilter : NSObject
+ (BOOL)canEncodeInPropertyList:;
+ (id)filterPropertyListNoData:;
+ (id)_filterDictionary:block:;
+ (id)filterPropertyList:;
+ (id)filterPropertyList:block:;
+ (id)_filterArray:block:;
@end
