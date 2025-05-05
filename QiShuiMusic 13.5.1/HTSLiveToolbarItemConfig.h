@interface HTSLiveToolbarItemConfig : IESLivePBBaseMessage
@property (nonatomic) NSInteger toolbarType;
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) NSString jumpSchema;
@property (nonatomic) NSInteger displayType;
@property (nonatomic) HTSLiveImage dynamicIcon;
@property (nonatomic) BOOL hasDynamicIcon;
@property (nonatomic) HTSLiveImage iconVertical;
@property (nonatomic) BOOL hasIconVertical;
@property (nonatomic) HTSLiveImage dynamicBottomIcon;
@property (nonatomic) BOOL hasDynamicBottomIcon;
@property (nonatomic) HTSLiveImage bottomIcon;
@property (nonatomic) BOOL hasBottomIcon;
@property (nonatomic) NSMutableArray toastListArray;
@property (nonatomic) Q toastListArray_Count;
@property (nonatomic) NSString extra;
+ (id)descriptor;
@end
