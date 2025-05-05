@interface BDXLynxTabbarItemPro : LynxUI
@property (nonatomic) BOOL selected;
@property (nonatomic) NSString tabTag;
@property (nonatomic) @? selectedBlock;
- (void)select:requestReset:;
- (id)selectedBlock;
- (void)setSelectedBlock:;
- (void)setTabTag:;
- (id)tabTag;
- (void)tabTag:requestReset:;
- (BOOL)selected;
- (id)init;
- (void)setSelected:;
- (void).cxx_destruct;
- (id)createView;
+ (id)__lynx_prop_config__471;
+ (id)__lynx_prop_config__542;
+ (void)lynxLazyLoad;
@end
