@interface IESECActionLogNodeEventTracking : IESECActionLogNodeBase
@property (nonatomic) NSString event;
@property (nonatomic) NSDictionary params;
- (void)setEvent:;
- (id)event;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)type;
- (void).cxx_destruct;
- (id)info;
- (id)params;
- (id)copyWithZone:;
- (void)setParams:;
@end
