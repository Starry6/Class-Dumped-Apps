@interface OSCacheEntry : NSObject
@property (nonatomic) NSObject object;
@property (nonatomic) Q cost;
@property (nonatomic) q sequenceNumber;
- (id)object;
- (void)setObject:;
- (unsigned long long)cost;
- (void)setCost:;
- (long long)sequenceNumber;
- (void)setSequenceNumber:;
- (void).cxx_destruct;
@end
