@interface AWEPadProgressPauseConfigModel : MTLModel
@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL canShowAutoPlay;
@property (nonatomic) BOOL canShowPureMode;
@property (nonatomic) BOOL canShowDanmaku;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canShowDanmaku;
- (BOOL)canShowAutoPlay;
- (void)setCanShowAutoPlay:;
- (BOOL)canShowPureMode;
- (void)setCanShowPureMode:;
- (void)setCanShowDanmaku:;
- (BOOL)enable;
- (void)setEnable:;
+ (id)JSONKeyPathsByPropertyKey;
@end
