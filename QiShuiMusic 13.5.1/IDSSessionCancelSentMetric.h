@interface IDSSessionCancelSentMetric : NSObject
@property (nonatomic) NSString guid;
@property (nonatomic) NSNumber numberOfRecipients;
@property (nonatomic) I remoteSessionEndReason;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSString name;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)guid;
- (id)name;
- (id)dictionaryRepresentation;
- (id)numberOfRecipients;
- (id)initWithGuid:numberOfRecipients:remoteSessionEndReason:;
- (unsigned int)remoteSessionEndReason;
@end
