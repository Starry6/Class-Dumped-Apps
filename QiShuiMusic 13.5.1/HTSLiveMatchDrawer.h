@interface HTSLiveMatchDrawer : IESLivePBBaseMessage
@property (nonatomic) NSString entryName;
@property (nonatomic) HTSLiveImage entryIcon;
@property (nonatomic) BOOL hasEntryIcon;
@property (nonatomic) NSString drawerTitle;
@property (nonatomic) HTSLiveImage drawerBackground;
@property (nonatomic) BOOL hasDrawerBackground;
@property (nonatomic) NSString returnBtnText;
@property (nonatomic) NSInteger displayMode;
+ (id)descriptor;
@end
