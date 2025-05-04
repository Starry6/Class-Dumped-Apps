@interface AWELuckyCatPlayletTaskModel : AWELiteBaseApiModel
@property (nonatomic) BOOL isOpenMiniSeries;
@property (nonatomic) NSString playletToken;
@property (nonatomic) AWELuckyCatPendant pendant;
@property (nonatomic) q hiddenStatus;
@property (nonatomic) BOOL isPlayletBlackBoxNode;
@property (nonatomic) BOOL needPlayGuideLottie;
- (id)pendant;
- (void)setPendant:;
- (BOOL)isOpenMiniSeries;
- (void)setIsOpenMiniSeries:;
- (id)playletToken;
- (void)setPlayletToken:;
- (long long)hiddenStatus;
- (void)setHiddenStatus:;
- (BOOL)isPlayletBlackBoxNode;
- (void)setIsPlayletBlackBoxNode:;
- (BOOL)needPlayGuideLottie;
- (void)setNeedPlayGuideLottie:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
