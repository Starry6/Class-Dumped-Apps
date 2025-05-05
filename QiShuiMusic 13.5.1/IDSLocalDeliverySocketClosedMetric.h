@interface IDSLocalDeliverySocketClosedMetric : NSObject
@property (nonatomic) NSString service;
@property (nonatomic) BOOL isToDefaultPairedDevice;
@property (nonatomic) Q closeError;
@property (nonatomic) Q socketError;
@property (nonatomic) Q bytesSent;
@property (nonatomic) Q packetsSent;
@property (nonatomic) Q bytesReceived;
@property (nonatomic) Q packetsReceived;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSString name;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)service;
- (void).cxx_destruct;
- (id)name;
- (id)dictionaryRepresentation;
- (unsigned long long)bytesSent;
- (unsigned long long)bytesReceived;
- (BOOL)isToDefaultPairedDevice;
- (unsigned long long)socketError;
- (id)initWithService:isToDefaultPairedDevice:closeError:socketError:bytesSent:packetsSent:bytesReceived:packetsReceived:;
- (unsigned long long)closeError;
- (unsigned long long)packetsSent;
- (unsigned long long)packetsReceived;
@end
