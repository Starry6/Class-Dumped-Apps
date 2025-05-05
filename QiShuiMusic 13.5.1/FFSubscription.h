@interface FFSubscription : NSObject
- (id)init;
- (id)initPrivate;
- (id)encodeToDictionary;
- (BOOL)matchesFeature:inDomain:inConfiguration:;
- (BOOL)matchesFeature:inDomain:inAlreadyLockedConfiguration:;
- (id)nameOfClass;
+ (id)mergeSubscriptions:;
+ (id)decodeFromDictionary:;
@end
