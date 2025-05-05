@interface SCNBufferBinding : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) @? block;
@property (nonatomic) q frequency;
- (id)block;
- (long long)frequency;
- (void)dealloc;
- (void)setName:;
- (void)setFrequency:;
- (void)setBlock:;
- (id)name;
@end
