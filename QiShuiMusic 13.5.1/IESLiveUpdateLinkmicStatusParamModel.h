@interface IESLiveUpdateLinkmicStatusParamModel : IESLiveBridgeModel
@property (nonatomic) NSString type;
@property (nonatomic) NSDictionary extra;
@property (nonatomic) NSString bizId;
- (void)setExtra:;
- (id)extra;
- (void)setType:;
- (id)type;
- (void).cxx_destruct;
- (id)bizId;
- (void)setBizId:;
+ (id)modelCustomPropertyMapper;
@end
