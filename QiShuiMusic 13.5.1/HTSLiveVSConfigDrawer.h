@interface HTSLiveVSConfigDrawer : IESLivePBBaseMessage
@property (nonatomic) HTSLiveMatchDrawer drawer;
@property (nonatomic) BOOL hasDrawer;
@property (nonatomic) HTSLiveImage drawerLabel;
@property (nonatomic) BOOL hasDrawerLabel;
@property (nonatomic) HTSLiveImage drawerBackground;
@property (nonatomic) BOOL hasDrawerBackground;
+ (id)descriptor;
@end
