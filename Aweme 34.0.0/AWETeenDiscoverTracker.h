@interface AWETeenDiscoverTracker : NSObject
+ (void)trackAlbumIndexShowWithModel:rank:indexCount:showType:extra:;
+ (void)trackAlbumIndexDetailShowWithEnterMethod:hasCover:hasIntroduction:extra:;
+ (void)trackAlbumIndexDetailScrollWithExtra:;
+ (void)trackGuideCardWithModel:rank:trackEvent:extra:;
+ (void)trackExploreChannelShowWithEnterMethod:rank:channelID:channelTitle:;
+ (void)trackGuideCardShowWithModel:rank:extra:;
+ (void)trackGuideCardClickWithModel:rank:extra:;
@end
