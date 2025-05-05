@interface ESTabBarController_swift.ESTabBar : UITabBar
@property (nonatomic) NSArray items;
- (void)dehighlightAction:;
- (void)highlightAction:;
- (void)selectAction:;
- (void)selectWithItemAtIndex:animated:userTriggered:;
- (void)touchDownAction:;
- (void)touchDownRepeatAction:;
- (void)touchUpOutsideAction:;
- (void)layoutSubviews;
- (id)items;
- (BOOL)pointInside:withEvent:;
- (id)initWithCoder:;
- (id)initWithFrame:;
- (void)setItems:;
- (void).cxx_destruct;
- (void)setItems:animated:;
- (void)beginCustomizingItems:;
- (BOOL)endCustomizingAnimated:;
@end
