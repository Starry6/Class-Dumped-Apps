@interface IDSQRAllocationMetric : NSObject
@property (nonatomic) Q duration;
@property (nonatomic) I result;
@property (nonatomic) I hasRecipientAccepted;
@property (nonatomic) I payloadSize;
@property (nonatomic) NSString topic;
@property (nonatomic) NSString service;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSString name;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned int)result;
- (unsigned int)payloadSize;
- (id)service;
- (void).cxx_destruct;
- (id)topic;
- (id)name;
- (id)dictionaryRepresentation;
- (unsigned long long)duration;
- (id)initWithDuration:result:hasRecipientAccepted:payloadSize:topic:service:;
- (unsigned int)hasRecipientAccepted;
@end
