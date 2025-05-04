@interface AWEShareReflowIncentiveChatModel : AWEBaseApiModel
@property (nonatomic) AWEShareReflowIncentiveChatPrivateShareModel privateShareInfo;
@property (nonatomic) AWEShareReflowIncentiveChatGroupShareModel groupShareInfo;
@property (nonatomic) q bizStatusCode;
@property (nonatomic) NSString toast;
- (id)privateShareInfo;
- (void)setPrivateShareInfo:;
- (id)groupShareInfo;
- (void)setGroupShareInfo:;
- (long long)bizStatusCode;
- (void)setBizStatusCode:;
- (void).cxx_destruct;
- (void)setToast:;
- (id)toast;
+ (id)JSONKeyPathsByPropertyKey;
@end
