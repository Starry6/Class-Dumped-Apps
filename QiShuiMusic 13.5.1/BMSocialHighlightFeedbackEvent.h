@interface BMSocialHighlightFeedbackEvent : BMEventBase
@property (nonatomic) NSString clientIdentifier;
@property (nonatomic) Q feedbackType;
@property (nonatomic) NSDate feedbackCreationDate;
@property (nonatomic) BMRankableSocialHighlight highlight;
@property (nonatomic) NSString clientVariant;
@property (nonatomic) I dataVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)feedbackType;
- (id)initWithProtoData:;
- (id)proto;
- (id)encodeAsProto;
- (unsigned int)dataVersion;
- (id)initWithProto:;
- (void).cxx_destruct;
- (id)serialize;
- (id)clientIdentifier;
- (id)highlight;
- (id)clientVariant;
- (int)_protoFeedbackType;
- (unsigned long long)_feedbackTypeForProtoType:;
- (id)initWithClientIdentifier:feedbackType:feedbackCreationDate:highlight:clientVariant:;
- (id)initWithClientIdentifier:feedbackType:feedbackCreationDate:highlight:;
- (id)feedbackCreationDate;
+ (id)eventWithData:dataVersion:;
@end
