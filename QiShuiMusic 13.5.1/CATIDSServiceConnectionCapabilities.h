@interface CATIDSServiceConnectionCapabilities : NSObject
@property (nonatomic) BOOL supportsReliableDelivery;
- (id)init;
- (id)initWithMessagingVersion:;
- (BOOL)supportsReliableDelivery;
@end
