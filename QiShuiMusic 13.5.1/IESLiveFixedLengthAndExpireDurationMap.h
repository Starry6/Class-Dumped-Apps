@interface IESLiveFixedLengthAndExpireDurationMap : NSObject
@property (nonatomic) IESLiveThreadSafeDictionary dict;
@property (nonatomic) Q capacity;
@property (nonatomic) Q expiredDuration;
@property (nonatomic) NSString identifier;
- (unsigned long long)expiredDuration;
- (id)initWithCapacity:expireDuration:identifier:;
- (void)setExpiredDuration:;
- (unsigned long long)capacity;
- (void)setCapacity:;
- (void)setObject:forKey:;
- (id)allKeys;
- (void)removeKey:;
- (id)identifier;
- (void).cxx_destruct;
- (void)update;
- (id)dict;
- (void)setIdentifier:;
- (void)setDict:;
- (void)removeKeys:;
- (void)saveData;
@end
