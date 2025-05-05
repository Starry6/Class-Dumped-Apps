@interface PCPersistentIdentifiers : NSObject
+ (id)processNamePidAndStringIdentifier:;
+ (id)_processNamePrefix;
+ (id)processNameAndPidIdentifier;
+ (unsigned long long)hostUniqueIdentifier;
+ (int)pidFromMatchingIdentifer:;
@end
