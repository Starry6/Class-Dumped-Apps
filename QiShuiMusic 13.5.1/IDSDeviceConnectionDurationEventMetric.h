@interface IDSDeviceConnectionDurationEventMetric : NSObject
@property (nonatomic) NSString serviceName;
@property (nonatomic) BOOL wasSuccessful;
@property (nonatomic) NSNumber clientInitTime;
@property (nonatomic) NSNumber clientOpenSocketCompletionTime;
@property (nonatomic) NSNumber daemonOpenSocketTime;
@property (nonatomic) NSNumber daemonOpenSocketCompletionTime;
@property (nonatomic) NSNumber firstPacketReceiveTime;
@property (nonatomic) NSNumber connectionInitTime;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSString name;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)wasSuccessful;
- (id)serviceName;
- (void).cxx_destruct;
- (id)name;
- (id)dictionaryRepresentation;
- (id)initWithService:wasSuccessful:clientInitTime:clientOpenSocketCompletionTime:daemonOpenSocketTime:daemonOpenSocketCompletionTime:firstPacketReceiveTime:connectionInitTime:;
- (id)clientInitTime;
- (id)clientOpenSocketCompletionTime;
- (id)daemonOpenSocketTime;
- (id)daemonOpenSocketCompletionTime;
- (id)firstPacketReceiveTime;
- (id)connectionInitTime;
@end
