@interface IDSCloudKitTransportLogMessage : NSObject
@property (nonatomic) NSDictionary payload;
@property (nonatomic) NSString secondaryID;
@property (nonatomic) NSString deviceID;
@property (nonatomic) NSString encryptionType;
@property (nonatomic) ENGroupID groupID;
@property (nonatomic) NSString recipientAlias;
@property (nonatomic) NSString senderAlias;
@property (nonatomic) IDSDestinationPushToken destination;
@property (nonatomic) NSData encryptedPayload;
@property (nonatomic) NSString cypherIdentifier;
- (id)groupID;
- (id)payload;
- (void)setPayload:;
- (id)destination;
- (void)setDeviceID:;
- (id)deviceID;
- (void).cxx_destruct;
- (id)cypherIdentifier;
- (id)recipientAlias;
- (id)encryptedPayload;
- (id)senderAlias;
- (id)encryptionType;
- (id)secondaryID;
- (void)setSecondaryID:;
- (void)setEncryptionType:;
@end
