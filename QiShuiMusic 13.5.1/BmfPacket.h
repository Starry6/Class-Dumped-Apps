@interface BmfPacket : NSObject
@property (nonatomic) ^v p;
@property (nonatomic) BOOL own;
- (BOOL)own;
- (void)setOwn:;
- (id)initFromPtr:own:;
- (void)dealloc;
- (BOOL)is:;
- (id)get:;
- (void)setTimestamp:;
- (id)ptr;
- (id)init:;
- (long long)timestamp;
- (id)p;
- (void)setP:;
- (BOOL)defined;
+ (id)generateEofPacket;
+ (id)generateEosPacket;
@end
