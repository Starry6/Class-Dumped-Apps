@interface CSJWebViewParamModel : NSObject
@property (nonatomic) <CSJWebViewWidgetDelegate> delegate;
@property (nonatomic) UIViewController parentVC;
@property (nonatomic) CSJAdSlot adSlot;
@property (nonatomic) CSJMaterialMeta materialMeta;
- (id)adSlot;
- (id)materialMeta;
- (void)setAdSlot:;
- (void)setMaterialMeta:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)parentVC;
- (void)setParentVC:;
@end
