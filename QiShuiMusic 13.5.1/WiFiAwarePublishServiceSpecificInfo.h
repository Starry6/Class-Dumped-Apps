@interface WiFiAwarePublishServiceSpecificInfo : NSObject
@property (nonatomic) NSData blob;
@property (nonatomic) NSData txtRecordData;
@property (nonatomic) NSString instanceName;
- (id)init;
- (id)instanceName;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setInstanceName:;
- (id)txtRecordData;
- (void)setBlob:;
- (id)blob;
- (void)setTxtRecordData:;
- (BOOL)blobEquals:;
- (BOOL)txtRecordEquals:;
- (BOOL)instanceNameEquals:;
+ (BOOL)supportsSecureCoding;
@end
