@interface AWEInteractiveInformationsModel : NSObject
@property (nonatomic) AWEAwemeModel awemodel;
@property (nonatomic) q playCount;
@property (nonatomic) q isEnterDetail;
@property (nonatomic) q isAdClick;
@property (nonatomic) q isLike;
@property (nonatomic) double currentPlayTime;
@property (nonatomic) double playPercent;
@property (nonatomic) BOOL hasConsume;
- (double)currentPlayTime;
- (void)setCurrentPlayTime:;
- (id)initWithAWEAwemeModel:;
- (long long)isEnterDetail;
- (void)setIsEnterDetail:;
- (long long)isAdClick;
- (void)setIsAdClick:;
- (BOOL)hasConsume;
- (id)awemodel;
- (double)playPercent;
- (void)setPlayPercent:;
- (void)setHasConsume:;
- (void)setAwemodel:;
- (long long)playCount;
- (void).cxx_destruct;
- (void)setPlayCount:;
- (long long)isLike;
- (void)setIsLike:;
@end
