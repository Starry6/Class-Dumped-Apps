@interface SASSystemInformation : NSObject
+ (id)deviceClass;
+ (id)productType;
+ (id)productVersion;
+ (id)storageCapacity;
+ (id)storageAvailable;
+ (long long)compareProductVersion:toProductVersion:;
@end
