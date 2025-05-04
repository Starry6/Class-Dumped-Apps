@interface AWEECShareCacheItem : NSObject
@property (nonatomic) NSString key;
@property (nonatomic) NSDictionary value;
@property (nonatomic) double updateTime;
@property (nonatomic) q cacheValidTime;
- (void)setCacheValidTime:;
- (id)value;
- (BOOL)isExpired;
- (void)setKey:;
- (long long)cacheValidTime;
- (id)key;
- (void)setValue:;
- (double)updateTime;
- (void).cxx_destruct;
- (void)setUpdateTime:;
@end
