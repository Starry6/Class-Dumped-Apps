@interface IESLiveInnerPbCommonGuideMessage : GPBMessage
@property (nonatomic) IESLiveInnerPbCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) q messageType;
@property (nonatomic) HTSLiveText mainContent;
@property (nonatomic) BOOL hasMainContent;
@property (nonatomic) NSMutableArray secondaryContentArray;
@property (nonatomic) Q secondaryContentArray_Count;
@property (nonatomic) IESLiveInnerPbImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) HTSLiveText buttonContent;
@property (nonatomic) BOOL hasButtonContent;
@property (nonatomic) NSString buttonActionSchema;
@property (nonatomic) IESLiveInnerPbImage buttonIcon;
@property (nonatomic) BOOL hasButtonIcon;
@property (nonatomic) q duration;
@property (nonatomic) BOOL isRoundedIcon;
+ (id)descriptor;
@end
