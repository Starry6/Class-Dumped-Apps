@interface IESLiveGetLinkmicStatusParamModel : IESLiveBridgeModel
@property (nonatomic) NSString type;
@property (nonatomic) NSString bizId;
@property (nonatomic) NSDictionary extra;
- (void)setExtra:;
- (id)extra;
- (void)setType:;
- (id)type;
- (void).cxx_destruct;
- (id)bizId;
- (void)setBizId:;
+ (id)modelCustomPropertyMapper;
@end
