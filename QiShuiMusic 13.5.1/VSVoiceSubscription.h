@interface VSVoiceSubscription : NSObject
@property (nonatomic) NSString clientID;
@property (nonatomic) NSString accessoryID;
@property (nonatomic) VSVoiceAsset voice;
- (id)accessoryID;
- (void)setVoice:;
- (void)setClientID:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setAccessoryID:;
- (id)voice;
- (void).cxx_destruct;
- (id)clientID;
- (id)initWithClient:accessory:voice:;
+ (BOOL)supportsSecureCoding;
@end
