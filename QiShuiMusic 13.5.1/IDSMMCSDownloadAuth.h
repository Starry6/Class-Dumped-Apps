@interface IDSMMCSDownloadAuth : NSObject
@property (nonatomic) NSData signature;
@property (nonatomic) NSString authURL;
@property (nonatomic) NSString ownerID;
@property (nonatomic) NSDictionary dictionaryRepresentation;
- (id)signature;
- (id)initWithDictionaryRepresentation:;
- (id)authURL;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:;
- (id)initWithSignature:authURL:ownerID:;
- (id)ownerID;
@end
