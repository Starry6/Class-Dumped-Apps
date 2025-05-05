@interface IESLiveInnerPbPullStreamUpdateMessage : GPBMessage
@property (nonatomic) IESLiveInnerPbCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSInteger pushStreamLevel;
@property (nonatomic) NSInteger randomSeconds;
+ (id)descriptor;
@end
