@interface IESLiveInnerPbRoomIntroMessage : GPBMessage
@property (nonatomic) IESLiveInnerPbCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) IESLiveInnerPbUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) q style;
@property (nonatomic) NSString intro;
@property (nonatomic) NSMutableArray labelArray;
@property (nonatomic) Q labelArray_Count;
+ (id)descriptor;
@end
