@interface IESLiveInnerPbBridgeMessage : GPBMessage
@property (nonatomic) IESLiveInnerPbCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) IESLiveInnerPbBridgeData bridge;
@property (nonatomic) BOOL hasBridge;
+ (id)descriptor;
@end
