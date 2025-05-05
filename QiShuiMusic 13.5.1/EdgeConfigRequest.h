@interface EdgeConfigRequest : NSObject
@property (nonatomic) NSString os;
@property (nonatomic) NSString apdid;
@property (nonatomic) NSDictionary deviceDataMap;
- (id)apdid;
- (id)deviceDataMap;
- (void)setApdid:;
- (void)setDeviceDataMap:;
- (id)os;
- (void)setOs:;
- (void).cxx_destruct;
+ (Class)deviceDataMapElementClass;
@end
