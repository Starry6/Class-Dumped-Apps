@interface HTSLiveGiftPanelEntranceDetail : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray panelDetailArray;
@property (nonatomic) Q panelDetailArray_Count;
@property (nonatomic) NSString panelURL;
@property (nonatomic) NSMutableArray bubbleTextArray;
@property (nonatomic) Q bubbleTextArray_Count;
@property (nonatomic) HTSLiveImage bubbleBackgroundImg;
@property (nonatomic) BOOL hasBubbleBackgroundImg;
@property (nonatomic) NSString bubbleURL;
@property (nonatomic) NSMutableArray awardTipsArray;
@property (nonatomic) Q awardTipsArray_Count;
@property (nonatomic) HTSLiveLightInfo lightInfo;
@property (nonatomic) BOOL hasLightInfo;
@property (nonatomic) HTSLiveDynamicInfo dynamicInfo;
@property (nonatomic) BOOL hasDynamicInfo;
@property (nonatomic) NSMutableDictionary extra;
@property (nonatomic) Q extra_Count;
+ (id)descriptor;
@end
