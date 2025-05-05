@interface NPSPrefPlistSizeUtil : NSObject
+ (unsigned long long)sizeForPlistAtPath:;
+ (unsigned long long)prefSizeFor:inContainer:;
+ (id)_domainPlistPathFor:inContainer:;
@end
