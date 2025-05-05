@interface MSCMSMessageDigestAttribute : NSObject
@property (nonatomic) NSData messageDigest;
- (void).cxx_destruct;
- (id)initWithAttribute:error:;
- (id)initWithDigest:;
- (id)encodeAttributeWithError:;
- (id)messageDigest;
- (void)setMessageDigest:;
+ (id)messageDigestAttributeWithDigest:;
@end
