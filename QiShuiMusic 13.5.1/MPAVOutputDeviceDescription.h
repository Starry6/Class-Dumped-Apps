@interface MPAVOutputDeviceDescription : NSObject
@property (nonatomic) q routeType;
@property (nonatomic) q routeSubtype;
@property (nonatomic) NSString uid;
@property (nonatomic) NSString modelID;
- (id)uid;
- (id)modelID;
- (long long)routeType;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (long long)routeSubtype;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithDeviceType:deviceSubtype:uid:;
- (id)initWithDeviceType:deviceSubtype:uid:modelID:;
@end
