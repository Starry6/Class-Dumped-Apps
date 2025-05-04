@interface AWEMixVideoStatusModel : AWEBaseApiModel
@property (nonatomic) q status;
@property (nonatomic) BOOL isCollected;
@property (nonatomic) BOOL isViewed;
@property (nonatomic) BOOL isLocatedCell;
@property (nonatomic) BOOL currentPlayTip;
@property (nonatomic) NSString preCompilationId;
- (BOOL)isCollected;
- (void)setIsCollected:;
- (BOOL)isViewed;
- (void)setIsViewed:;
- (BOOL)isLocatedCell;
- (void)setIsLocatedCell:;
- (BOOL)currentPlayTip;
- (void)setCurrentPlayTip:;
- (id)preCompilationId;
- (void)setPreCompilationId:;
- (void)setStatus:;
- (void).cxx_destruct;
- (long long)status;
+ (id)JSONKeyPathsByPropertyKey;
@end
