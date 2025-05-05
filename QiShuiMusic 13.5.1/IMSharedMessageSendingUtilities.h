@interface IMSharedMessageSendingUtilities : NSObject
@property (nonatomic) q serviceAvailability;
- (BOOL)isiMessageEnabled;
- (long long)serviceAvailability;
- (BOOL)canSendPhotos:videos:audioClips:;
- (BOOL)isMMSEnabled;
- (BOOL)canSendText;
- (BOOL)_hasSMSCapability;
- (BOOL)_canSendText;
- (void)_updateServiceAvailability;
- (id)_managedConfigAppAllowlist;
- (BOOL)isSupportedAttachmentUTI:;
- (BOOL)_isiMessageSupported;
- (long long)_maxMMSAttachmentCount;
- (long long)_maxMMSMessageByteCount;
- (void)setServiceAvailability:;
+ (id)sharedInstance;
+ (void)_setupAccountMonitor;
@end
