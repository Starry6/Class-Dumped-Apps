@interface VKCQuickActionMenuTuple : NSObject
@property (nonatomic) VKCBaseDataDetectorElement element;
@property (nonatomic) UIMenu menu;
@property (nonatomic) DDUIAction defaultAction;
@property (nonatomic) VKCActionInfoButton button;
- (id)element;
- (void)setMenu:;
- (void)setDefaultAction:;
- (id)defaultAction;
- (id)menu;
- (id)button;
- (void).cxx_destruct;
- (void)setButton:;
- (void)setElement:;
@end
