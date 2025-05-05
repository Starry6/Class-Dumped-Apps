@interface CJPayLoadingStyleInfo : JSONModel
@property (nonatomic) NSString loadingStyle;
@property (nonatomic) CJPayLoadingShowInfo preShowInfo;
@property (nonatomic) CJPayLoadingShowInfo payingShowInfo;
@property (nonatomic) NSString showPayResult;
@property (nonatomic) CJPayLoadingShowInfo nopwdCombinePreShowInfo;
@property (nonatomic) CJPayLoadingShowInfo nopwdCombinePayingShowInfo;
@property (nonatomic) BOOL isNeedShowPayResult;
- (void)setPreShowInfo:;
- (BOOL)isNeedShowPayResult;
- (id)loadingStyle;
- (id)nopwdCombinePayingShowInfo;
- (id)nopwdCombinePreShowInfo;
- (id)payingShowInfo;
- (id)preShowInfo;
- (void)setIsNeedShowPayResult:;
- (void)setLoadingStyle:;
- (void)setNopwdCombinePayingShowInfo:;
- (void)setNopwdCombinePreShowInfo:;
- (void)setPayingShowInfo:;
- (void)setShowPayResult:;
- (id)showPayResult;
- (void).cxx_destruct;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
