@interface CKAssetDownloadPreauthorization : NSObject
@property (nonatomic) NSString responseUUID;
@property (nonatomic) NSDictionary contentResponseHeaders;
@property (nonatomic) NSData contentResponseBody;
- (id)contentResponseHeaders;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithResponseUUID:contentResponseHeaders:contentResponseBody:;
- (id)responseUUID;
- (id)contentResponseBody;
@end
