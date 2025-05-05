@interface IESLiveLinkMicOpenGameInfo : IESLivePBBaseMessage
@property (nonatomic) NSString appId;
@property (nonatomic) HTSLiveStreamUrl streamURL;
@property (nonatomic) BOOL hasStreamURL;
@property (nonatomic) q gameId;
@property (nonatomic) q linkGameId;
@property (nonatomic) NSString gameExtra;
@property (nonatomic) q gameType;
@property (nonatomic) NSString linkerExtra;
@property (nonatomic) q pushType;
+ (id)descriptor;
@end
