@interface MDMConfiguration : NSObject
@property (nonatomic) BOOL isUserEnrollment;
@property (nonatomic) BOOL supportUserChannel;
@property (nonatomic) NSString enrollmentID;
@property (nonatomic) NSString personaID;
@property (nonatomic) NSString easEnrollmentID;
@property (nonatomic) NSString rmAccountID;
@property (nonatomic) NSString enrollmentMode;
@property (nonatomic) NSObject<OS_dispatch_queue> memberQueue;
@property (nonatomic) NSString memberQueueManagingProfileIdentifier;
@property (nonatomic) ^{__SecIdentity=} memberQueueIdentity;
@property (nonatomic) NSArray memberQueueCheckInPinnedSecCertificateRefs;
@property (nonatomic) BOOL memberQueuePinningRevocationCheckRequired;
@property (nonatomic) BOOL memberQueueSignMessage;
@property (nonatomic) NSString memberQueueTopic;
@property (nonatomic) NSDictionary memberQueueOrganizationInfo;
@property (nonatomic) NSNumber memberQueuePollingInterval;
@property (nonatomic) NSURL memberQueueServerURL;
@property (nonatomic) NSURL memberQueueCheckInURL;
@property (nonatomic) NSArray memberQueueServerCapabilities;
@property (nonatomic) NSDictionary memberQueueMDMOptions;
@property (nonatomic) Q memberQueueAccessRights;
@property (nonatomic) BOOL memberQueueUseDevelopmentAPNS;
@property (nonatomic) NSString memberQueuePushMagic;
- (void)setPersonaID:;
- (void)setMemberQueue:;
- (id)memberQueue;
- (id)personaID;
- (id)init;
- (void)setEasEnrollmentID:;
- (id)memberQueueIdentity;
- (void)setMemberQueueSignMessage:;
- (id)memberQueueOrganizationInfo;
- (void)memberQueueForgetCurrentConfiguration;
- (id)memberQueueCheckInPinnedSecCertificateRefs;
- (id)memberQueueServerURL;
- (void)setMemberQueueUseDevelopmentAPNS:;
- (id)memberQueueMDMOptions;
- (BOOL)memberQueueSignMessage;
- (void)setMemberQueuePushMagic:;
- (void)setEnrollmentID:;
- (id)memberQueuePushMagic;
- (BOOL)isUserEnrollment;
- (void)setMemberQueueServerURL:;
- (id)_mdmPropertiesFilePathForChannelType:;
- (id)memberQueueTopic;
- (BOOL)supportUserChannel;
- (id)enrollmentID;
- (void)setMemberQueueOrganizationInfo:;
- (id)_readPropertiesForChannelType:createIfMissingFile:error:;
- (id)memberQueueServerCapabilities;
- (void)setMemberQueuePinningRevocationCheckRequired:;
- (void)refreshDetailsFromDisk;
- (void)setMemberQueueAccessRights:;
- (void)setMemberQueueTopic:;
- (id)rmAccountID;
- (void)setMemberQueueMDMOptions:;
- (BOOL)readConfigurationOutError:;
- (id)memberQueuePollingInterval;
- (void)setSupportUserChannel:;
- (void)setMemberQueueIdentity:;
- (void)setMemberQueueCheckInPinnedSecCertificateRefs:;
- (unsigned long long)memberQueueAccessRights;
- (BOOL)memberQueuePinningRevocationCheckRequired;
- (void)setEnrollmentMode:;
- (id)setPropertyForKey:value:channelType:;
- (void).cxx_destruct;
- (void)setMemberQueueServerCapabilities:;
- (id)memberQueueCheckInURL;
- (BOOL)memberQueueUseDevelopmentAPNS;
- (id)getPropertyForKey:channelType:;
- (void)setRmAccountID:;
- (void)setMemberQueueCheckInURL:;
- (void)setMemberQueuePollingInterval:;
- (id)enrollmentMode;
- (void)setIsUserEnrollment:;
- (BOOL)_writeProperties:channelType:error:;
- (id)easEnrollmentID;
- (void)setMemberQueueManagingProfileIdentifier:;
- (id)memberQueueManagingProfileIdentifier;
+ (id)sharedConfiguration;
+ (BOOL)isUserEnrollmentDisregardingIdentityPresence;
@end
