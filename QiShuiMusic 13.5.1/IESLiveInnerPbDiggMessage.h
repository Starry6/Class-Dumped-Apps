@interface IESLiveInnerPbDiggMessage : GPBMessage
@property (nonatomic) IESLiveInnerPbCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) q diggCount;
@property (nonatomic) q duration;
@property (nonatomic) q color;
@property (nonatomic) IESLiveInnerPbUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) NSString icon;
+ (id)descriptor;
@end
