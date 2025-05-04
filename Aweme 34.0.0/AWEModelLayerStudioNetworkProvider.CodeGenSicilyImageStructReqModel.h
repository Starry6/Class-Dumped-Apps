@interface AWEModelLayerStudioNetworkProvider.CodeGenSicilyImageStructReqModel : NSObject
@property (nonatomic) NSString uri;
@property (nonatomic) NSString latitude;
@property (nonatomic) NSString insertShootPositionId;
@property (nonatomic) NSString longitude;
@property (nonatomic) NSNumber height;
@property (nonatomic) NSNumber width;
- (id)toJSONString;
- (id)insertShootPositionId;
- (void)setInsertShootPositionId:;
- (id)initWithUri:latitude:insertShootPositionId:longitude:height:width:;
- (id)init;
- (void)setLatitude:;
- (void)setHeight:;
- (id)latitude;
- (void)setWidth:;
- (void)setLongitude:;
- (id)uri;
- (id)longitude;
- (id)width;
- (void)setUri:;
- (void).cxx_destruct;
- (id)height;
@end
