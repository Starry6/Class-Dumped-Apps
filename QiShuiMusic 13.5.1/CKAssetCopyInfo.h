@interface CKAssetCopyInfo : NSObject
@property (nonatomic) NSData fileSignature;
@property (nonatomic) NSData referenceSignature;
@property (nonatomic) NSData assetKey;
@property (nonatomic) NSURL assetURL;
@property (nonatomic) NSString senderID;
- (id)referenceSignature;
- (id)fileSignature;
- (void)setSenderID:;
- (id)assetURL;
- (void)setReferenceSignature:;
- (id)CKDescriptionPropertiesWithPublic:private:shouldExpand:;
- (id)senderID;
- (id)initWithCoder:;
- (void)setAssetURL:;
- (id)assetKey;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (void)setAssetKey:;
- (void)setFileSignature:;
+ (BOOL)supportsSecureCoding;
@end
