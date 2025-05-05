@interface SecXPCHelper : NSObject
+ (id)safeErrorPrimitiveClasses;
+ (id)encodedDataFromError:;
+ (id)cleanObjectForXPC:;
+ (id)errorFromEncodedData:;
+ (id)safeErrorCollectionClasses;
+ (id)safeErrorClasses;
+ (id)safeCKErrorPrimitiveClasses;
+ (id)cleanseErrorForXPC:;
+ (id)cleanDictionaryForXPC:;
@end
