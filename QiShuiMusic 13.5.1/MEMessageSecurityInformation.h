@interface MEMessageSecurityInformation : NSObject
@property (nonatomic) NSString decoderID;
@property (nonatomic) NSArray signers;
@property (nonatomic) BOOL isEncrypted;
@property (nonatomic) NSError signingError;
@property (nonatomic) NSError encryptionError;
@property (nonatomic) BOOL shouldBlockRemoteContent;
@property (nonatomic) NSString localizedRemoteContentBlockingReason;
- (BOOL)isEncrypted;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)signers;
- (id)signingError;
- (id)encryptionError;
- (id)initWithSigners:isEncrypted:signingError:encryptionError:;
- (id)initWithSigners:isEncrypted:signingError:encryptionError:shouldBlockRemoteContent:localizedRemoteContentBlockingReason:;
- (BOOL)shouldBlockRemoteContent;
- (id)localizedRemoteContentBlockingReason;
- (id)decoderID;
- (void)setDecoderID:;
+ (BOOL)supportsSecureCoding;
@end
