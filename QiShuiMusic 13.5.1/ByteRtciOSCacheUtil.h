@interface ByteRtciOSCacheUtil : NSObject
@property (nonatomic) NSMutableDictionary cacheDict;
- (void)addString:Key:;
- (void)addNumber:Key:;
- (id)getObjectWithKey:;
- (void)setCacheDict:;
- (void)clearCache;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)updateCache;
- (id)cacheDict;
+ (void)destory;
+ (id)sharedInstance;
@end
