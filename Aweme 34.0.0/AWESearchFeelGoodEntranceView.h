@interface AWESearchFeelGoodEntranceView : UIView
@property (nonatomic) NSDictionary type2ViewClassMap;
@property (nonatomic) NSMutableDictionary type2ViewCache;
@property (nonatomic) UIView<AWESearchFeelGoodElementView> elementView;
- (void)dismissEntrance;
- (void)dismissPopups;
- (id)elementViewWithEntranceType:;
- (id)type2ViewCache;
- (id)type2ViewClassMap;
- (void)showEntrnceViewWithConfig:completion:;
- (void)setType2ViewClassMap:;
- (void)setType2ViewCache:;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (void)setElementView:;
- (id)elementView;
@end
