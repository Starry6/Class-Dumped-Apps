@interface AWEHPFeedTabGuideConfig : MTLModel
@property (nonatomic) BOOL enable;
@property (nonatomic) q preloadSize;
@property (nonatomic) NSArray supportPages;
@property (nonatomic) AWEFeedTabJumpRollBackConfig rollBackConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)preloadSize;
- (void)setPreloadSize:;
- (void)setRollBackConfig:;
- (id)rollBackConfig;
- (id)supportPages;
- (void)setSupportPages:;
- (BOOL)enable;
- (void).cxx_destruct;
- (void)setEnable:;
+ (id)JSONKeyPathsByPropertyKey;
@end
