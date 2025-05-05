@interface IESLiveInnerPbBridgeData : GPBMessage
@property (nonatomic) IESLiveInnerPbCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSString bridgeMessageJson;
+ (id)descriptor;
@end
