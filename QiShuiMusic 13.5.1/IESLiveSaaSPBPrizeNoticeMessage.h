@interface IESLiveSaaSPBPrizeNoticeMessage : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) q assetId;
@property (nonatomic) IESLiveSaaSPBImageInfo imageInfo;
@property (nonatomic) BOOL hasImageInfo;
@property (nonatomic) IESLiveSaaSPBImage landscapeBgImg;
@property (nonatomic) BOOL hasLandscapeBgImg;
@property (nonatomic) NSString landscapeContent;
@property (nonatomic) q sceneContextId;
@property (nonatomic) NSInteger landscapeHeight;
@property (nonatomic) NSInteger playPriority;
@property (nonatomic) NSMutableDictionary extra;
@property (nonatomic) Q extra_Count;
+ (id)descriptor;
@end
