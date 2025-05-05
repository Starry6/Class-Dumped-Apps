@interface HTSLiveRoomStatsMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSString displayShort;
@property (nonatomic) NSString displayMiddle;
@property (nonatomic) NSString displayLong;
@property (nonatomic) q displayValue;
@property (nonatomic) q displayVersion;
@property (nonatomic) BOOL incremental;
@property (nonatomic) BOOL isHidden;
@property (nonatomic) q total;
@property (nonatomic) q displayType;
+ (id)descriptor;
@end
