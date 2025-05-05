@interface SiriTTSVoiceSubscription : NSObject
@property (nonatomic) SiriTTSSynthesisVoice voice;
@property (nonatomic) NSString clientId;
@property (nonatomic) NSString accessoryId;
@property (nonatomic) NSString description;
- (id)init;
- (id)clientId;
- (void)setVoice:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)voice;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (void)setClientId:;
- (id)accessoryId;
- (void)setAccessoryId:;
+ (BOOL)supportsSecureCoding;
+ (void)setSupportsSecureCoding:;
@end
