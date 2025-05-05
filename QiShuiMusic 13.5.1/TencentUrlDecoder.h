@interface TencentUrlDecoder : NSObject
@property (nonatomic) NSString scheme;
@property (nonatomic) NSString host;
@property (nonatomic) NSString path;
@property (nonatomic) NSDictionary queryItem;
- (id)path;
- (id)init;
- (void)dealloc;
- (void)setScheme:;
- (id)scheme;
- (id)host;
- (void)setPath:;
- (void)setHost:;
- (void).cxx_destruct;
- (id)queryItem;
+ (id)decoderWithUrl:;
@end
