@interface HTSLiveRoomIntroMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) q style;
@property (nonatomic) NSString intro;
@property (nonatomic) NSMutableArray labelArray;
@property (nonatomic) Q labelArray_Count;
@property (nonatomic) q introVideoItemId;
@property (nonatomic) NSString introVideoTitle;
@property (nonatomic) NSMutableArray selectedLabelsArray;
@property (nonatomic) Q selectedLabelsArray_Count;
@property (nonatomic) NSMutableArray introLabelsArray;
@property (nonatomic) Q introLabelsArray_Count;
@property (nonatomic) HTSLivePublicAreaCommon publicAreaCommon;
@property (nonatomic) BOOL hasPublicAreaCommon;
+ (id)descriptor;
@end
