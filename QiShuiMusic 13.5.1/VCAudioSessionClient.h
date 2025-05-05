@interface VCAudioSessionClient : NSObject
@property (nonatomic) C clientType;
@property (nonatomic) <VCAudioSessionDelegate> notificationClient;
@property (nonatomic) VCAudioSessionMediaProperties mediaProperties;
- (unsigned char)clientType;
- (void)dealloc;
- (id)notificationClient;
- (void)setClientType:;
- (id)copyWithZone:;
- (id)mediaProperties;
- (void)setMediaProperties:;
- (void)setNotificationClient:;
@end
