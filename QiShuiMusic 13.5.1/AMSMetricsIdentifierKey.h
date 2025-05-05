@interface AMSMetricsIdentifierKey : NSObject
@property (nonatomic) BOOL crossDeviceSync;
@property (nonatomic) NSString name;
- (void)setName:;
- (BOOL)crossDeviceSync;
- (void).cxx_destruct;
- (id)name;
- (void)setCrossDeviceSync:;
+ (id)keyWithName:crossDeviceSync:;
@end
