@interface OSALogCounterObject : NSObject
@property (nonatomic) Q count;
@property (nonatomic) NSMutableDictionary signatures;
- (void)setCount:;
- (id)signatures;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)count;
+ (id)counter;
+ (id)masterCounts;
@end
