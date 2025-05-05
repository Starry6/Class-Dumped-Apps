@interface BDASifSchemaModel : NSObject
@property (nonatomic) NSString accessKey;
@property (nonatomic) NSString channel;
@property (nonatomic) NSString bundle;
@property (nonatomic) NSString surl;
@property (nonatomic) NSDictionary queryItems;
@property (nonatomic) NSString originURLString;
- (id)originURLString;
- (void)setOriginURLString:;
- (void)setSurl:;
- (id)surl;
- (id)queryItems;
- (void)setChannel:;
- (id)channel;
- (void)setQueryItems:;
- (id)bundle;
- (void).cxx_destruct;
- (void)setBundle:;
- (id)accessKey;
- (void)setAccessKey:;
@end
