@interface AWEHPTabRefreshConfig : MTLModel
@property (nonatomic) BOOL enable;
@property (nonatomic) NSNumber animateType;
@property (nonatomic) NSNumber maxAnimateDuration;
@property (nonatomic) NSNumber minAnimateDuration;
@property (nonatomic) NSString dragRefreshText;
@property (nonatomic) NSDictionary tabCustomConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAnimateType:;
- (id)animateType;
- (id)maxAnimateDuration;
- (void)setMaxAnimateDuration:;
- (id)minAnimateDuration;
- (void)setMinAnimateDuration:;
- (id)dragRefreshText;
- (void)setDragRefreshText:;
- (id)tabCustomConfig;
- (void)setTabCustomConfig:;
- (BOOL)enable;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)setEnable:;
+ (BOOL)isAnimateTypeValid:;
+ (id)JSONKeyPathsByPropertyKey;
@end
