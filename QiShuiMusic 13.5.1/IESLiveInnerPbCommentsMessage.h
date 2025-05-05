@interface IESLiveInnerPbCommentsMessage : GPBMessage
@property (nonatomic) IESLiveInnerPbCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) IESLiveInnerPbUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) NSString content;
@property (nonatomic) NSString color;
@property (nonatomic) IESLiveInnerPbImage backGround;
@property (nonatomic) BOOL hasBackGround;
@property (nonatomic) q actionType;
@property (nonatomic) NSString actionContent;
+ (id)descriptor;
@end
