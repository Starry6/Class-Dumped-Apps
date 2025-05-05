@interface IDSMMCSAccessRequestMessage : IDSMessage
@property (nonatomic) NSArray downloadAuths;
@property (nonatomic) NSData downloadingDeviceToken;
@property (nonatomic) NSData sessionToken;
@property (nonatomic) NSString downloadingDeviceID;
@property (nonatomic) NSString senderID;
- (void)setSenderID:;
- (id)init;
- (id)senderID;
- (id)messageBody;
- (long long)responseCommand;
- (long long)command;
- (void).cxx_destruct;
- (id)sessionToken;
- (id)copyWithZone:;
- (id)requiredKeys;
- (void)setSessionToken:;
- (id)downloadAuths;
- (void)setDownloadAuths:;
- (id)downloadingDeviceToken;
- (void)setDownloadingDeviceToken:;
- (id)downloadingDeviceID;
- (void)setDownloadingDeviceID:;
@end
