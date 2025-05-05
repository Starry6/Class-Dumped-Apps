@interface IMMessageNotificationController : NSObject
@property (nonatomic) IDSService messageNotificationControllerIDSService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void)service:account:identifier:didSendWithSuccess:error:;
- (void)service:account:incomingMessage:fromID:context:;
- (BOOL)_isCurrentDeviceAudioAccessory;
- (BOOL)_deviceIsAudioAccessory:;
- (id)_copyIDForDevice:;
- (BOOL)audioAccessoryDeviceWithTokenURIExists:;
- (id)_copyIDSIdentifierOrDefault:;
- (void)_playTone;
- (void)_executeCommandFromMessageRequest:;
- (void)sendNotificationMessageToUniqueID:withCommmand:;
- (void)sendNotificationMessageToTokenURI:withCommmand:;
- (void)_sendNotificationMessageRequest:toTokenURI:;
- (id)messageNotificationControllerIDSService;
- (void)setMessageNotificationControllerIDSService:;
+ (id)sharedInstance;
@end
