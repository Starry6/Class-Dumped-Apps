@interface ABUAutoDetailCondition : NSObject
@property (nonatomic) Q useEcpmType;
@property (nonatomic) Q posState;
@property (nonatomic) NSString useEcpm;
@property (nonatomic) NSDictionary extraParam;
- (void)setUseEcpmType:;
- (id)useEcpm;
- (id)extraParam;
- (unsigned long long)posState;
- (void)setExtraParam:;
- (void)setPosState:;
- (void)setUseEcpm:;
- (unsigned long long)useEcpmType;
- (void).cxx_destruct;
@end
