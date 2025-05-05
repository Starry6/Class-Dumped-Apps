@interface BMStreamSyncPlatformPolicy : NSObject
@property (nonatomic) Q transportType;
@property (nonatomic) Q direction;
- (unsigned long long)direction;
- (unsigned long long)transportType;
- (id)initWithTransportType:direction:;
@end
