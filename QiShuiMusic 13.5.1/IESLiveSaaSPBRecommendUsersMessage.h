@interface IESLiveSaaSPBRecommendUsersMessage : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSString listTitle;
@property (nonatomic) NSMutableArray usersArray;
@property (nonatomic) Q usersArray_Count;
@property (nonatomic) IESLiveSaaSPBImage imgVertical;
@property (nonatomic) BOOL hasImgVertical;
@property (nonatomic) IESLiveSaaSPBImage imgHorizontal;
@property (nonatomic) BOOL hasImgHorizontal;
@property (nonatomic) q displayTime;
@property (nonatomic) q maxPushDelayTime;
@property (nonatomic) BOOL checkAlive;
@property (nonatomic) NSString aliveScene;
@property (nonatomic) NSString aliveIds;
+ (id)descriptor;
@end
