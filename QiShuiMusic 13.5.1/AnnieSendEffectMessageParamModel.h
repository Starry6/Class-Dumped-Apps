@interface AnnieSendEffectMessageParamModel : IESLiveBridgeModel
@property (nonatomic) NSNumber msgID;
@property (nonatomic) NSNumber arg1;
@property (nonatomic) NSNumber arg2;
@property (nonatomic) NSString arg3;
- (id)msgID;
- (void)setMsgID:;
- (id)arg2;
- (void)setArg2:;
- (void)setArg1:;
- (void).cxx_destruct;
- (id)arg1;
- (id)arg3;
- (void)setArg3:;
+ (id)modelCustomPropertyMapper;
@end
