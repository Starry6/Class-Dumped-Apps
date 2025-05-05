@interface MADVIVisualSearchThirdPartyObject : NSObject
@property (nonatomic) NSString objectIdentifier;
@property (nonatomic) NSString imageURL;
@property (nonatomic) NSString thumbnailURL;
@property (nonatomic) NSData metadata;
- (id)metadata;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)objectIdentifier;
- (void).cxx_destruct;
- (id)description;
- (id)imageURL;
- (id)thumbnailURL;
- (id)initWithObjectIdentifier:imageURL:thumbnailURL:metadata:;
+ (BOOL)supportsSecureCoding;
@end
