@interface AWEMessageReachTrackUtils : NSObject
+ (void)trackTryBubbleShowResultWithBubbleModel:channelID:result:;
+ (void)trackBlockComponentInfo:;
+ (id)generateComponentListBlockTackInfo:;
+ (id)generateComponentBlockTackInfo:paramContext:blockCode:blockDesc:;
+ (void)trackBlockComponentListWithChannelID:paramContext:blockComponents:;
+ (id)getDurationInfoWithWithModel:paramContext:trackInfo:channelID:;
+ (id)getExtraWithWithModel:paramContext:;
+ (void)trackComponentPreCheckTimeout:;
+ (void)track_messageReachRequestResult:;
+ (id)getDurationInfoWithParamContext:;
+ (void)track_messageReachComponentBlock:;
+ (id)generateComponentTackInfo:;
+ (id)findResultModelWithComponentID:paramContext:;
+ (id)generateComponentBlockTackInfo:paramContext:blockCode:blockDesc:fromCache:result:;
+ (id)generateComponentBlockTackInfo:paramContext:blockCode:blockDesc:extraInfo:fromCache:result:;
+ (id)generateComponentPreVerifyTrackParamsWithComponentModel:resultModel:;
@end
