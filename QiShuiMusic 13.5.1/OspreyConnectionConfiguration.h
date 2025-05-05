@interface OspreyConnectionConfiguration : NSObject
@property (nonatomic) NSURL connectionUrl;
@property (nonatomic) NSURLSessionConfiguration urlSessionConfiguration;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)urlSessionConfiguration;
- (id)copyWithZone:;
- (id)connectionUrl;
- (void)setConnectionUrl:;
- (void)setUrlSessionConfiguration:;
@end
