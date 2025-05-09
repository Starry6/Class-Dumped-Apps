@interface IESLiveSaaSPBUser_PayGrade : GPBMessage
@property (nonatomic) IESLiveSaaSPBImage iconWithLevel;
@property (nonatomic) BOOL hasIconWithLevel;
@property (nonatomic) q level;
@property (nonatomic) q thisGradeMinDiamond;
@property (nonatomic) q thisGradeMaxDiamond;
@property (nonatomic) q score;
@property (nonatomic) NSString gradeDescribe;
@property (nonatomic) NSMutableArray gradeIconListArray;
@property (nonatomic) Q gradeIconListArray_Count;
@property (nonatomic) q screenChatType;
@property (nonatomic) IESLiveSaaSPBImage imIcon;
@property (nonatomic) BOOL hasImIcon;
@property (nonatomic) IESLiveSaaSPBImage imIconWithLevel;
@property (nonatomic) BOOL hasImIconWithLevel;
@property (nonatomic) IESLiveSaaSPBImage liveIcon;
@property (nonatomic) BOOL hasLiveIcon;
@property (nonatomic) IESLiveSaaSPBImage newImIconWithLevel;
@property (nonatomic) BOOL hasNewImIconWithLevel;
@property (nonatomic) IESLiveSaaSPBImage newLiveIcon;
@property (nonatomic) BOOL hasNewLiveIcon;
@property (nonatomic) q upgradeNeedConsume;
@property (nonatomic) NSString nextPrivileges;
@property (nonatomic) IESLiveSaaSPBImage background;
@property (nonatomic) BOOL hasBackground;
@property (nonatomic) IESLiveSaaSPBImage backgroundBack;
@property (nonatomic) BOOL hasBackgroundBack;
@property (nonatomic) IESLiveSaaSPBGradeBuffInfo buffInfo;
@property (nonatomic) BOOL hasBuffInfo;
@property (nonatomic) q totalDiamondCount;
@property (nonatomic) IESLiveSaaSPBImage diamondIcon;
@property (nonatomic) BOOL hasDiamondIcon;
@property (nonatomic) NSString name;
@property (nonatomic) NSString nextName;
@property (nonatomic) IESLiveSaaSPBImage nextIcon;
@property (nonatomic) BOOL hasNextIcon;
@property (nonatomic) q nextDiamond;
@property (nonatomic) q nowDiamond;
@property (nonatomic) q payDiamondBak;
@property (nonatomic) BOOL gradeDescribeShining;
@property (nonatomic) NSString gradeBanner;
@property (nonatomic) IESLiveSaaSPBImage profileDialogBg;
@property (nonatomic) BOOL hasProfileDialogBg;
@property (nonatomic) IESLiveSaaSPBImage profileDialogBgBack;
@property (nonatomic) BOOL hasProfileDialogBgBack;
+ (id)descriptor;
@end
