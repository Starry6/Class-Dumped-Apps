@interface IESLiveSaaSPBMultiTab_TabItem : GPBMessage
@property (nonatomic) q tabType;
@property (nonatomic) NSString tabName;
@property (nonatomic) NSString jumpLink;
@property (nonatomic) q tabId;
@property (nonatomic) NSInteger tabShowType;
@property (nonatomic) GPBInt64Array hideCameraIdsArray;
@property (nonatomic) Q hideCameraIdsArray_Count;
@property (nonatomic) IESLiveSaaSPBMultiTab_Bubble bubble;
@property (nonatomic) BOOL hasBubble;
@property (nonatomic) NSInteger disablePreload;
+ (id)descriptor;
@end
