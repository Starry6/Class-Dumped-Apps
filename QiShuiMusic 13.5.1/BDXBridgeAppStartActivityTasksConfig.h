@interface BDXBridgeAppStartActivityTasksConfig : BDXBridgeModel
@property (nonatomic) NSNumber listen_require_duration;
@property (nonatomic) NSNumber like_require_amount;
- (id)like_require_amount;
- (id)listen_require_duration;
- (void)setLike_require_amount:;
- (void)setListen_require_duration:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
