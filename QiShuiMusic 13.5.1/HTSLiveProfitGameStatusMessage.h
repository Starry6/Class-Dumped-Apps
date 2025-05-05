@interface HTSLiveProfitGameStatusMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSInteger status;
@property (nonatomic) NSString roomId;
@property (nonatomic) HTSLiveStreamUrl streamURL;
@property (nonatomic) BOOL hasStreamURL;
@property (nonatomic) q gameId;
@property (nonatomic) NSString appId;
@property (nonatomic) q linkGameId;
@property (nonatomic) HTSLiveStreamUrl iosStreamURL;
@property (nonatomic) BOOL hasIosStreamURL;
@property (nonatomic) HTSLiveStreamUrl androidStreamURL;
@property (nonatomic) BOOL hasAndroidStreamURL;
@property (nonatomic) NSString gameExtra;
@property (nonatomic) NSInteger pushStreamType;
@property (nonatomic) NSString linkerExtra;
@property (nonatomic) q gameType;
+ (id)descriptor;
@end
