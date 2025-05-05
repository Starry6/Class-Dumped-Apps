@interface BDACSiOSConfig : NSObject
@property (nonatomic) q pornInspectMinImageSize;
@property (nonatomic) q maxConcurrentTaskCount;
@property (nonatomic) q maxQueueSize;
@property (nonatomic) q slardarFlushCount;
- (long long)maxConcurrentTaskCount;
- (long long)maxQueueSize;
- (long long)pornInspectMinImageSize;
- (long long)slardarFlushCount;
- (id)initWithDictionary:;
@end
