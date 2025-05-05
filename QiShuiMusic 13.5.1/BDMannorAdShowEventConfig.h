@interface BDMannorAdShowEventConfig : NSObject
@property (nonatomic) NSString tag;
@property (nonatomic) NSString refer;
@property (nonatomic) NSString bindComponentType;
@property (nonatomic) NSDictionary extra;
@property (nonatomic) NSDictionary adExtraData;
@property (nonatomic) q bindComponentLifecycle;
- (void)setAdExtraData:;
- (id)adExtraData;
- (long long)bindComponentLifecycle;
- (id)bindComponentType;
- (id)refer;
- (void)setBindComponentLifecycle:;
- (void)setBindComponentType:;
- (void)setExtra:;
- (void)setRefer:;
- (id)tag;
- (id)extra;
- (void)setTag:;
- (void).cxx_destruct;
@end
