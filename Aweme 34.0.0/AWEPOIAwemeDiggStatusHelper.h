@interface AWEPOIAwemeDiggStatusHelper : NSObject
+ (long long)fetchAwemeDiggStatusInDictionary:;
+ (id)fetchOriginItemIDInDictionary:;
+ (BOOL)fetchShouldRequestDiggAwemeInDictionary:;
+ (id)modifyAwemeDiggStatus:inDictionary:;
+ (id)removeRequestDiggInDictionary:;
@end
