@interface GEOSignedResource : NSObject
+ (unsigned long long)typeForResourceByFileName:;
+ (BOOL)_validateResource:withData:data:error:;
+ (BOOL)_validateResource:atPath:data:error:;
+ (id)validateResource:withData:;
+ (id)validateResource:atPath:;
+ (id)loadResource:atPath:error:;
+ (id)validateResourceAtPath:;
+ (id)loadResourceAtPath:error:;
@end
