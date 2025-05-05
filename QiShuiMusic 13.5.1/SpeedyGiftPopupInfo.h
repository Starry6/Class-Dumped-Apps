@interface SpeedyGiftPopupInfo : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage toolbarIconDynamic;
@property (nonatomic) BOOL hasToolbarIconDynamic;
@property (nonatomic) HTSLiveImage toolbarIconStatic;
@property (nonatomic) BOOL hasToolbarIconStatic;
@property (nonatomic) NSString toolbarIconSchemeURL;
@property (nonatomic) NSMutableArray popUpInfoArray;
@property (nonatomic) Q popUpInfoArray_Count;
@property (nonatomic) NSMutableDictionary extra;
@property (nonatomic) Q extra_Count;
+ (id)descriptor;
@end
