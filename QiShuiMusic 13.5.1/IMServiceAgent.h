@interface IMServiceAgent : NSObject
@property (nonatomic) NSArray myAvailableMessages;
@property (nonatomic) NSArray myAwayMessages;
@property (nonatomic) Q vcCapabilities;
@property (nonatomic) NSDictionary currentAVChatInfo;
@property (nonatomic) Q requestAudioReflectorStart;
@property (nonatomic) Q requestAudioReflectorStop;
- (id)notificationCenter;
- (id)serviceWithName:;
- (unsigned long long)vcCapabilities;
- (id)myPictureData;
- (void)launchIfNecessary;
- (id)myAvailableMessages;
- (id)myAwayMessages;
- (void)setMyAvailableMessages:;
- (void)setMyAwayMessages:;
- (id)serviceWithNameNonBlocking:;
- (id)currentAVChatInfo;
- (unsigned long long)requestAudioReflectorStart;
- (unsigned long long)requestAudioReflectorStop;
- (unsigned long long)requestVideoStillForPerson:;
+ (id)imageURLForStatus:;
+ (id)notificationCenter;
+ (void)setServiceAgentCapabilities:;
+ (id)imageNameForStatus:;
+ (void)forgetStatusImageAppearance;
+ (id)sharedAgent;
+ (long long)serviceAgentCapabilities;
@end
