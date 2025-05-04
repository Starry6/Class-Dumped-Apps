@interface AWEPublishAnchorDataService : NSObject
@property (nonatomic) BOOL postPage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setIsPostPage:;
- (id)cameraSupportCancelAnchorList;
- (void)setPostPage:;
- (BOOL)postPage;
- (void)silentPassiveAnchorInfoWithPublishModel:anchorType:anchorID:anchorContent:anchorTitle:anchorTag:anchorIconList:source:;
- (void)passiveAnchorInfoWithPublishModel:anchorType:anchorID:anchorContent:anchorTitle:anchorTag:anchorIconList:source:;
- (BOOL)cleanSilentAnchorInfoIfNeeded:anchorTypes:;
- (void)setSilentAnchorInfoIfNeeded:providerClasses:;
- (id)allProviderClasses;
- (void)cleanAnchorInfoWithPublishModel:;
- (void)setSilentAnchorInfoIfNeeded:;
- (id)supportAnchorListForQuickStory;
- (BOOL)isPostPage;
@end
