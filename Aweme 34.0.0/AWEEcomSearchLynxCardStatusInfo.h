@interface AWEEcomSearchLynxCardStatusInfo : NSObject
@property (nonatomic) BOOL needForceRefresh;
@property (nonatomic) BOOL isDynamicModelPreprocessed;
@property (nonatomic) double cacheHeight;
@property (nonatomic) double estimatedHeight;
@property (nonatomic) double realHeight;
@property (nonatomic) NSNumber isCardReuse;
- (void)setIsCardReuse:;
- (id)isCardReuse;
- (double)realHeight;
- (void)setRealHeight:;
- (void)setIsDynamicModelPreprocessed:;
- (void)setNeedForceRefresh:;
- (BOOL)needForceRefresh;
- (BOOL)isDynamicModelPreprocessed;
- (double)cacheHeight;
- (void)setCacheHeight:;
- (void).cxx_destruct;
- (void)reset;
- (double)estimatedHeight;
- (void)setEstimatedHeight:;
@end
