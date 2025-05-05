@interface HTSLivePrizeNoticeMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) q assetId;
@property (nonatomic) HTSLiveImageInfo imageInfo;
@property (nonatomic) BOOL hasImageInfo;
@property (nonatomic) HTSLiveImage landscapeBgImg;
@property (nonatomic) BOOL hasLandscapeBgImg;
@property (nonatomic) NSString landscapeContent;
@property (nonatomic) q sceneContextId;
@property (nonatomic) NSInteger landscapeHeight;
@property (nonatomic) NSInteger playPriority;
@property (nonatomic) NSMutableDictionary extra;
@property (nonatomic) Q extra_Count;
@property (nonatomic) BOOL useSeparatePlayer;
+ (id)descriptor;
@end
