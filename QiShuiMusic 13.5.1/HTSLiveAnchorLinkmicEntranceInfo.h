@interface HTSLiveAnchorLinkmicEntranceInfo : IESLivePBBaseMessage
@property (nonatomic) NSInteger panelType;
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) NSString text;
@property (nonatomic) HTSLiveImage pkToLinkmicImage;
@property (nonatomic) BOOL hasPkToLinkmicImage;
@property (nonatomic) HTSLiveImage linkmicToPkImage;
@property (nonatomic) BOOL hasLinkmicToPkImage;
@property (nonatomic) HTSLiveImage leadPkImage;
@property (nonatomic) BOOL hasLeadPkImage;
@property (nonatomic) NSString leadPkFreqKey;
@property (nonatomic) HTSLiveImage pkIcon;
@property (nonatomic) BOOL hasPkIcon;
@property (nonatomic) HTSLiveImage anchorIcon;
@property (nonatomic) BOOL hasAnchorIcon;
@property (nonatomic) NSString wordType;
@property (nonatomic) GPBInt64ObjectDictionary buttonLead;
@property (nonatomic) Q buttonLead_Count;
+ (id)descriptor;
@end
