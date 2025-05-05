@interface IDSWiProxDidDisconnectFromPeerMetric : NSObject
@property (nonatomic) Q duration;
@property (nonatomic) Q resultCode;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSString name;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)resultCode;
- (id)name;
- (id)dictionaryRepresentation;
- (unsigned long long)duration;
- (id)initWithDuration:resultCode:;
@end
