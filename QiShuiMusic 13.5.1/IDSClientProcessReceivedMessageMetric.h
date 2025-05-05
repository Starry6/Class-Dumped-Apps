@interface IDSClientProcessReceivedMessageMetric : NSObject
@property (nonatomic) NSString serviceIdentifier;
@property (nonatomic) Q messageSize;
@property (nonatomic) Q deltaTime;
@property (nonatomic) Q priority;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSString name;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)serviceIdentifier;
- (void).cxx_destruct;
- (id)name;
- (unsigned long long)messageSize;
- (id)dictionaryRepresentation;
- (unsigned long long)priority;
- (id)initWithServiceIdentifier:messageSize:deltaTime:priority:;
- (unsigned long long)deltaTime;
@end
