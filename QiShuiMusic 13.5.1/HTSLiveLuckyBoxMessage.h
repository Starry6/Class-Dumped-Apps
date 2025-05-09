@interface HTSLiveLuckyBoxMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) q diamondCount;
@property (nonatomic) q boxId;
@property (nonatomic) q sendTime;
@property (nonatomic) q delayTime;
@property (nonatomic) q boxType;
@property (nonatomic) NSString title;
@property (nonatomic) BOOL large;
@property (nonatomic) HTSLiveImage background;
@property (nonatomic) BOOL hasBackground;
@property (nonatomic) BOOL isOfficial;
@property (nonatomic) q priority;
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) NSMutableArray descriptionListArray;
@property (nonatomic) Q descriptionListArray_Count;
@property (nonatomic) HTSLiveImage luckyIcon;
@property (nonatomic) BOOL hasLuckyIcon;
@property (nonatomic) q displayDuration;
@property (nonatomic) NSInteger boxStatus;
@property (nonatomic) NSInteger flatDuration;
@property (nonatomic) NSInteger unpackType;
@property (nonatomic) q businessType;
@property (nonatomic) HTSLiveImage topCoverImage;
@property (nonatomic) BOOL hasTopCoverImage;
@property (nonatomic) HTSLiveImage bottomCoverImage;
@property (nonatomic) BOOL hasBottomCoverImage;
@property (nonatomic) NSString boxIdStr;
@property (nonatomic) HTSLiveLuckyBoxMessage_BottomCommentMsg bottomCommentMsg;
@property (nonatomic) BOOL hasBottomCommentMsg;
@property (nonatomic) BOOL isRiskyOwner;
@property (nonatomic) HTSLiveLuckyBoxMessage_BoxMeta meta;
@property (nonatomic) BOOL hasMeta;
@property (nonatomic) HTSLiveLuckyBoxMessage_Extra extra;
@property (nonatomic) BOOL hasExtra;
@property (nonatomic) NSString activityId;
@property (nonatomic) HTSLiveLuckyBoxMessage_Dress dress;
@property (nonatomic) BOOL hasDress;
@property (nonatomic) HTSLivePublicAreaCommon publicAreaCommon;
@property (nonatomic) BOOL hasPublicAreaCommon;
@property (nonatomic) q joinFrozenDuration;
+ (id)descriptor;
@end
