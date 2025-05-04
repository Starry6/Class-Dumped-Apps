@interface AWESearchFeelGoodElementView : UIView
@property (nonatomic) @? tapActionBlock;
@property (nonatomic) @? submitActionBlock;
@property (nonatomic) @? clickContentBlock;
@property (nonatomic) BOOL isOnlySupportLightMode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)tapActionBlock;
- (void)setTapActionBlock:;
- (void)setClickContentBlock:;
- (id)clickContentBlock;
- (id)submitActionBlock;
- (void)setSubmitActionBlock:;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
@end
