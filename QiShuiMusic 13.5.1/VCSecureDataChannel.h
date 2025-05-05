@interface VCSecureDataChannel : NSObject
@property (nonatomic) <VCSecureDataChannelDelegate> delegate;
@property (nonatomic) q maxEncryptedDataSize;
@property (nonatomic) q maxUnencryptedDataSize;
@property (nonatomic) Q maxUDPPayloadSize;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (int)sendData:messageType:encrypted:;
- (id)initWithLocalCallID:remoteCallID:isCaller:sharedSecret:error:;
- (int)setupWithSharedSecret:isCaller:error:;
- (int)convertEncryptedData:toData:encrypted:;
- (int)convertData:toEncryptedData:encrypted:;
- (long long)maxEncryptedDataSize;
- (long long)maxUnencryptedDataSize;
- (unsigned long long)maxUDPPayloadSize;
- (void)setMaxUDPPayloadSize:;
@end
