@interface AWEIMSecurityGlobalToastPushModel : AWEBaseApiModel
@property (nonatomic) NSString bizType;
@property (nonatomic) AWEIMSecurityGlobalToastPushModel_DialogModel globalDialog;
- (id)bizType;
- (void)setBizType:;
- (id)globalDialog;
- (void)setGlobalDialog:;
- (void).cxx_destruct;
+ (id)globalDialogsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
