@interface CJPayThemeStyleManager : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> serialQueue;
@property (nonatomic) CJPayServerThemeStyle serverTheme;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)i_updateThemeStyleWithThemeDic:;
- (void)p_refreshStyle:;
- (void)setServerTheme:;
- (void)p_BizRefreshStyle:;
- (id)serverTheme;
- (void)updateStyle:;
- (id)serialQueue;
- (void).cxx_destruct;
- (void)setSerialQueue:;
+ (void)registerComponents;
+ (id)shared;
@end
