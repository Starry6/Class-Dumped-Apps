@interface CTStewieEmergencyStartMessage : NSObject
@property (nonatomic) q conversationID;
@property (nonatomic) NSData serializedQuestionnaireAnswers;
@property (nonatomic) q notifyOption;
@property (nonatomic) BOOL shareEED;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithDictionary:error:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (long long)conversationID;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)isEqualToEmergencyStartMessage:;
- (double)estimatedSendTime;
- (void)setConversationID:;
- (id)serializedQuestionnaireAnswers;
- (void)setSerializedQuestionnaireAnswers:;
- (long long)notifyOption;
- (void)setNotifyOption:;
- (BOOL)shareEED;
- (void)setShareEED:;
+ (BOOL)supportsSecureCoding;
@end
