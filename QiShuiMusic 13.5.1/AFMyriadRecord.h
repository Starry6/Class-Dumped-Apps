@interface AFMyriadRecord : NSObject
@property (nonatomic) BOOL advertisementDataIsDirty;
@property (nonatomic) C rawAudioGoodnessScore;
@property (nonatomic) C bump;
@property (nonatomic) C goodness;
@property (nonatomic) NSData advertisementData;
@property (nonatomic) C userConfidence;
@property (nonatomic) S pHash;
@property (nonatomic) NSUUID deviceID;
@property (nonatomic) C deviceGroup;
@property (nonatomic) C deviceClass;
@property (nonatomic) C productType;
@property (nonatomic) C tieBreaker;
@property (nonatomic) BOOL isMe;
@property (nonatomic) C isCollectedFromContextCollector;
- (void)setProductType:;
- (unsigned char)deviceGroup;
- (unsigned char)deviceClass;
- (unsigned char)productType;
- (id)advertisementData;
- (BOOL)isMe;
- (id)init;
- (void)setDeviceClass:;
- (void)setIsMe:;
- (void)setAdvertisementData:;
- (unsigned long long)hash;
- (void)setDeviceID:;
- (id)deviceID;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithAudioData:;
- (id)initWithDeviceID:data:;
- (void)setPHash:;
- (void)setRawAudioGoodnessScore:withBump:;
- (void)adjustByMultiplier:adding:;
- (void)setUserConfidence:;
- (void)generateRandomConfidence;
- (void)setDeviceGroup:;
- (void)setTieBreaker:;
- (void)generateTiebreaker;
- (BOOL)isATrump;
- (BOOL)isInEarTrump;
- (BOOL)isCarplayTrump;
- (BOOL)isALateSupressionTrumpFor:;
- (BOOL)isAContinuation;
- (BOOL)isAnEmergency;
- (BOOL)isAnEmergencyHandled;
- (BOOL)isSane;
- (BOOL)isSlowdown;
- (int)slowdownDelay;
- (id)asAdvertisementData;
- (BOOL)hasEqualAdvertismentData:;
- (unsigned char)goodness;
- (void)setGoodness:;
- (unsigned char)userConfidence;
- (unsigned short)pHash;
- (unsigned char)tieBreaker;
- (unsigned char)rawAudioGoodnessScore;
- (void)setRawAudioGoodnessScore:;
- (unsigned char)bump;
- (void)setBump:;
- (unsigned char)isCollectedFromContextCollector;
- (void)setIsCollectedFromContextCollector:;
- (BOOL)advertisementDataIsDirty;
- (void)setAdvertisementDataIsDirty:;
@end
