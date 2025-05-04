@interface AWEMixBarInPlaceTransitionComponentConfig : NSObject
@property (nonatomic) NSArray originView;
@property (nonatomic) NSArray targetView;
@property (nonatomic) NSArray stableRectValue;
@property (nonatomic) NSArray changeRectValue;
@property (nonatomic) NSArray originHiddenValue;
@property (nonatomic) NSArray customStableRect;
@property (nonatomic) NSArray customChangeRect;
- (id)customStableRect;
- (id)customChangeRect;
- (void)setStableRectValue:;
- (void)setChangeRectValue:;
- (void)setOriginHiddenValue:;
- (void)resetRectValueWithTopView:;
- (void)resetHiddenValue;
- (id)stableRectValue;
- (id)changeRectValue;
- (id)originHiddenValue;
- (void)setCustomStableRect:;
- (void)setCustomChangeRect:;
- (id)targetView;
- (void)setTargetView:;
- (void).cxx_destruct;
- (id)originView;
- (void)setOriginView:;
@end
