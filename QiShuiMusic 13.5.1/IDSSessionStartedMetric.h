@interface IDSSessionStartedMetric : NSObject
@property (nonatomic) NSString guid;
@property (nonatomic) NSNumber protocolVersionNumber;
@property (nonatomic) NSString serviceName;
@property (nonatomic) I clientType;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSString name;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned int)clientType;
- (id)serviceName;
- (void).cxx_destruct;
- (id)guid;
- (id)name;
- (id)dictionaryRepresentation;
- (id)initWithGuid:protocolVersionNumber:serviceName:clientType:;
- (id)protocolVersionNumber;
@end
