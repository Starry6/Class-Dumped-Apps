@interface BoxListResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) Q type;
@property (nonatomic) NSNumber serverTimeStamp;
@property (nonatomic) HTSRedEnvelopeModelInfo info;
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) q boxId;
@property (nonatomic) q sendTime;
@property (nonatomic) q delayTime;
@property (nonatomic) NSInteger boxType;
@property (nonatomic) NSString title;
@property (nonatomic) q diamondCount;
@property (nonatomic) q style;
@property (nonatomic) HTSLiveImage background;
@property (nonatomic) BOOL hasBackground;
@property (nonatomic) BOOL isOfficial;
@property (nonatomic) NSInteger priority;
@property (nonatomic) BOOL large;
@property (nonatomic) NSMutableArray descriptionListArray;
@property (nonatomic) Q descriptionListArray_Count;
@property (nonatomic) q displayDuration;
@property (nonatomic) NSInteger boxStatus;
@property (nonatomic) NSInteger flatDuration;
@property (nonatomic) NSInteger unpackType;
@property (nonatomic) NSInteger rushCondition;
@property (nonatomic) q businessType;
@property (nonatomic) HTSLiveImage topCoverImage;
@property (nonatomic) BOOL hasTopCoverImage;
@property (nonatomic) HTSLiveImage bottomCoverImage;
@property (nonatomic) BOOL hasBottomCoverImage;
@property (nonatomic) BOOL isRiskyOwner;
@property (nonatomic) BoxListResponse_BoxMeta meta;
@property (nonatomic) BOOL hasMeta;
@property (nonatomic) BoxListResponse_ResponseData_DressInfo dressInfo;
@property (nonatomic) BOOL hasDressInfo;
@property (nonatomic) NSString activityId;
@property (nonatomic) NSString boxIdStr;
@property (nonatomic) q joinFrozenDuration;
- (id)serverTimeStamp;
- (void)setServerTimeStamp:;
- (void)setInfo:;
- (unsigned long long)type;
- (id)info;
+ (id)descriptor;
@end
