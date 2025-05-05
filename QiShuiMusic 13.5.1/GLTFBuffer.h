@interface GLTFBuffer : NSObject
@property (nonatomic) NSData data;
@property (nonatomic) NSURL uri;
@property (nonatomic) q length;
- (id)uri;
- (id)data;
- (id)initWithLength:;
- (id)initWithData:;
- (void).cxx_destruct;
- (void)setData:;
- (long long)length;
- (void)setLength:;
- (void)setUri:;
@end
