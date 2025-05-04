@interface AWESearchLynxHorizontalVideoListV2Element : LynxUI
@property (nonatomic) AWESearchLynxHorizontalVideoListV2ElementView listView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)data:requestReset:;
- (void)sessionid:requestReset:;
- (void)bounce:requestReset:;
- (void)becomeactive:withResult:;
- (void)resignactive:withResult:;
- (void)displayCellWithIndex:type:;
- (void)clickCellWithIndex:type:;
- (void)scrollToBounce;
- (void)didBecomeActive;
- (id)listView;
- (void)didResignActive;
- (void)setListView:;
- (void).cxx_destruct;
- (id)createView;
+ (id)__lynx_prop_config__542;
+ (id)__lynx_prop_config__350;
+ (id)__lynx_prop_config__451;
+ (id)__lynx_ui_method_config__963;
+ (id)__lynx_ui_method_config__1004;
@end
