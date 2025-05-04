@interface AWEBasicModeFakeElement : UIView
@property (nonatomic) UITapGestureRecognizer tap;
@property (nonatomic) {UIEdgeInsets=dddd} hitTestEdgeInsets;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) BOOL disableTapGes;
- (void)p_setup;
- (void)p_addTapGes;
- (void)setDisableTapGes:;
- (BOOL)disableTapGes;
- (void)setModel:;
- (id)hitTestEdgeInsets;
- (void)tap:;
- (BOOL)pointInside:withEvent:;
- (void)setHitTestEdgeInsets:;
- (id)initWithFrame:;
- (id)model;
- (void).cxx_destruct;
- (id)tap;
- (void)setTap:;
@end
