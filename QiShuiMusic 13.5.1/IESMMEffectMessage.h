@interface IESMMEffectMessage : NSObject
@property (nonatomic) q type;
@property (nonatomic) q msgId;
@property (nonatomic) q arg1;
@property (nonatomic) q arg2;
@property (nonatomic) NSString arg3;
- (id)init;
- (long long)arg2;
- (void)setType:;
- (void)setArg2:;
- (long long)type;
- (void)setArg1:;
- (void).cxx_destruct;
- (long long)arg1;
- (long long)msgId;
- (void)setMsgId:;
- (id)arg3;
- (void)setArg3:;
+ (id)messageWithType:;
@end
