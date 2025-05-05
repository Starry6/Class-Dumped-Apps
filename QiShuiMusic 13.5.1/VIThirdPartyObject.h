@interface VIThirdPartyObject : NSObject
@property (nonatomic) NSString objectIdentifier;
@property (nonatomic) NSString imageURL;
@property (nonatomic) NSString thumbnailURL;
@property (nonatomic) NSData metadata;
- (id)metadata;
- (id)objectIdentifier;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)imageURL;
- (id)copyWithZone:;
- (id)thumbnailURL;
- (id)initWithObjectIdentifier:imageURL:thumbnailURL:metadata:;
@end
