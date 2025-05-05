@interface CJPayAuthManager : NSObject
@property (nonatomic) NSString authAliPayScheme;
@property (nonatomic) BOOL isInAuthing;
@property (nonatomic) @? completionBlock;
- (void)setIsInAuthing:;
- (void)authAliPay:callback:;
- (id)authAliPayScheme;
- (BOOL)canProcessURL:;
- (BOOL)isInAuthing;
- (void)registerAuthAliPayScheme:;
- (void)setAuthAliPayScheme:;
- (void)setCompletionBlock:;
- (void).cxx_destruct;
- (id)completionBlock;
+ (id)shared;
@end
