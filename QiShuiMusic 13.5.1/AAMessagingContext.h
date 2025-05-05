@interface AAMessagingContext : NSObject
@property (nonatomic) NSString outgoingResponseIdentifier;
@property (nonatomic) NSString incomingResponseIdentifier;
@property (nonatomic) NSString senderCorrelationIdentifier;
@property (nonatomic) AAMessagingDestination fromID;
@property (nonatomic) AAMessagingDestination toID;
@property (nonatomic) BOOL expectsPeerResponse;
- (id)initWithContext:;
- (void).cxx_destruct;
- (id)senderCorrelationIdentifier;
- (BOOL)expectsPeerResponse;
- (id)incomingResponseIdentifier;
- (id)outgoingResponseIdentifier;
- (id)fromID;
- (id)toID;
@end
