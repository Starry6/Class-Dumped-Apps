@interface ItemShareListResponse_ItemInfo : IESLivePBBaseMessage
@property (nonatomic) NSString itemId;
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) NSString title;
@property (nonatomic) NSString text;
@property (nonatomic) NSString buttonText;
@property (nonatomic) NSString defaultSchema;
@property (nonatomic) NSString buttonTrackingEventName;
@property (nonatomic) BOOL closePanelAfterSchemaJump;
@property (nonatomic) BOOL isDefault;
@property (nonatomic) NSMutableDictionary trackingParams;
@property (nonatomic) Q trackingParams_Count;
@property (nonatomic) NSString extra;
+ (id)descriptor;
@end
