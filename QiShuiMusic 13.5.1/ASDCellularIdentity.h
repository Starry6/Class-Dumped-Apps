@interface ASDCellularIdentity : NSObject
@property (nonatomic) BOOL roaming;
@property (nonatomic) NSString defaultsKey;
@property (nonatomic) NSString simIdentity;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isRoaming;
- (id)defaultsKey;
- (void)setRoaming:;
- (id)simIdentity;
+ (id)nullIdentity;
+ (id)identityForSubscription:usingClient:error:;
@end
