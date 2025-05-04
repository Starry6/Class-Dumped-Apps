@interface AWEQuickFlashStickerDataHelper : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)quickFlashModelFromSchema:;
+ (id)quickFlashModelFromStickerString:preferredFollowEntry:;
+ (BOOL)showQuickFlashEntry:;
+ (void)addChallengeNameWithPublishModel:;
+ (void)requestQuickFlashModelWithTemplateID:completion:;
+ (void)requestQuickFlashModelWithTitle:completion:;
+ (void)requestQuickFlashInfoWithID:title:needFetchBindPropModel:completion:;
+ (void)requestQuickFlashModelWithEffectID:completion:;
+ (void)requestEffectModelWithFlashMobID:completion:;
+ (void)changeFlashMobFavoriteStatusWithParamDict:collect:completion:;
+ (id)parseQuickFlashModelFromInfo:;
+ (void)trackParseQuickFlashModelWithStatus:stickerArrayString:;
+ (BOOL)commonQuickFlashEntry:;
+ (void)flashMobFavoriteStatusWithFlashMobId:flashMobTitle:completion:;
+ (void)changeFlashMobFavoriteStatusWithFlashMobId:flashMobTitle:collect:completion:;
+ (void)requestFlashMobBindWithSourceID:sourceType:targetType:completion:;
+ (id)parseQuickFlashModelFromInfo:publishModel:;
+ (void)flashMobFavoriteStatusWithParamDict:completion:;
+ (void)fetchCollectListWithCursor:count:completion:;
@end
