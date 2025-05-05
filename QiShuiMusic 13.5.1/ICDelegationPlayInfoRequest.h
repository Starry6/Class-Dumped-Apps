@interface ICDelegationPlayInfoRequest : NSObject
@property (nonatomic) NSData playerAnisetteMID;
@property (nonatomic) NSString playerDeviceGUID;
@property (nonatomic) NSString playerUserAgent;
@property (nonatomic) NSArray tokenRequests;
@property (nonatomic) NSMutableDictionary propertyListRepresentation;
- (id)propertyListRepresentation;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)playerDeviceGUID;
- (id)tokenRequests;
- (id)playerUserAgent;
- (id)playerAnisetteMID;
- (void)setPlayerAnisetteMID:;
- (void)setPlayerDeviceGUID:;
- (void)setPlayerUserAgent:;
- (void)setTokenRequests:;
@end
