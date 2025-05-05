@interface SendAuthReq : BaseReq
@property (nonatomic) NSString scope;
@property (nonatomic) NSString state;
@property (nonatomic) BOOL isOption1;
@property (nonatomic) BOOL nonautomatic;
@property (nonatomic) NSString extData;
- (id)extData;
- (BOOL)isOption1;
- (BOOL)nonautomatic;
- (void)setExtData:;
- (void)setIsOption1:;
- (void)setNonautomatic:;
- (void)setScope:;
- (void)setState:;
- (id)scope;
- (id)state;
- (void).cxx_destruct;
@end
