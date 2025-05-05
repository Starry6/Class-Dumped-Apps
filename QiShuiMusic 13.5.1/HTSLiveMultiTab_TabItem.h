@interface HTSLiveMultiTab_TabItem : IESLivePBBaseMessage
@property (nonatomic) q tabType;
@property (nonatomic) NSString tabName;
@property (nonatomic) NSString jumpLink;
@property (nonatomic) q tabId;
@property (nonatomic) NSInteger tabShowType;
@property (nonatomic) GPBInt64Array hideCameraIdsArray;
@property (nonatomic) Q hideCameraIdsArray_Count;
@property (nonatomic) HTSLiveMultiTab_Bubble bubble;
@property (nonatomic) BOOL hasBubble;
@property (nonatomic) NSInteger disablePreload;
@property (nonatomic) NSString color;
+ (id)descriptor;
@end
