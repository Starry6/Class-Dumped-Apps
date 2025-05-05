@interface IESLiveInnerPbGameStatusMessage : GPBMessage
@property (nonatomic) IESLiveInnerPbCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) q gameId;
@property (nonatomic) NSInteger status;
@property (nonatomic) NSString configExtra;
+ (id)descriptor;
@end
