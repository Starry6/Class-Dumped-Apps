@interface IESLiveSaaSPBToolbarItemConfig : GPBMessage
@property (nonatomic) NSInteger toolbarType;
@property (nonatomic) IESLiveSaaSPBImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) NSString jumpSchema;
@property (nonatomic) NSInteger displayType;
@property (nonatomic) IESLiveSaaSPBImage dynamicIcon;
@property (nonatomic) BOOL hasDynamicIcon;
@property (nonatomic) IESLiveSaaSPBImage iconVertical;
@property (nonatomic) BOOL hasIconVertical;
@property (nonatomic) IESLiveSaaSPBImage dynamicBottomIcon;
@property (nonatomic) BOOL hasDynamicBottomIcon;
@property (nonatomic) IESLiveSaaSPBImage bottomIcon;
@property (nonatomic) BOOL hasBottomIcon;
@property (nonatomic) NSString extra;
+ (id)descriptor;
@end
