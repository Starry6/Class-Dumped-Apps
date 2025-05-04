@interface AWEHPTabConfigModel : AWEBaseApiModel
@property (nonatomic) NSNumber editMode;
@property (nonatomic) NSNumber longPressEdit;
@property (nonatomic) NSNumber hotSwitchType;
@property (nonatomic) NSNumber hotSwitchStrategy;
@property (nonatomic) NSNumber requestInterval;
@property (nonatomic) q bottomSecondTabReplaceable;
@property (nonatomic) NSArray bottomSecondTabReplaceableList;
- (id)longPressEdit;
- (void)setLongPressEdit:;
- (id)hotSwitchType;
- (void)setHotSwitchType:;
- (id)hotSwitchStrategy;
- (void)setHotSwitchStrategy:;
- (long long)bottomSecondTabReplaceable;
- (void)setBottomSecondTabReplaceable:;
- (id)bottomSecondTabReplaceableList;
- (void)setBottomSecondTabReplaceableList:;
- (void)setRequestInterval:;
- (void).cxx_destruct;
- (id)requestInterval;
- (id)editMode;
- (void)setEditMode:;
+ (id)JSONKeyPathsByPropertyKey;
@end
