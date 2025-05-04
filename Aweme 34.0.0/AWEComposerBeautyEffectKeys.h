@interface AWEComposerBeautyEffectKeys : NSObject
@property (nonatomic) NSString dataReadyKey;
@property (nonatomic) NSString lastPanelNameKey;
@property (nonatomic) NSString lastABGroupKey;
@property (nonatomic) NSString lastRegionKey;
@property (nonatomic) NSString businessName;
@property (nonatomic) NSString userHadModifiedKey;
- (id)initWithBusinessName:;
- (id)p_defaultKey:withPrefix:;
- (id)lastPanelNameKey;
- (id)lastABGroupKey;
- (id)lastRegionKey;
- (id)userHadModifiedKey;
- (void)setLastPanelNameKey:;
- (void)setLastABGroupKey:;
- (void)setLastRegionKey:;
- (void)setUserHadModifiedKey:;
- (id)dataReadyKey;
- (void)setDataReadyKey:;
- (void).cxx_destruct;
- (id)businessName;
- (void)setBusinessName:;
@end
