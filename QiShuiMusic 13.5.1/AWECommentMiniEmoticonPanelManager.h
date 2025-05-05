@interface AWECommentMiniEmoticonPanelManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogout;
- (id)init;
- (void)dealloc;
+ (void)checkEmoticonsValid:expectedCount:;
+ (id)defaultEmoticons;
+ (id)defaultQuickEmoticons;
+ (id)getRecentlyUsedEmoticons;
+ (id)getRecentlyUsedEmoticonsOfCount:;
+ (id)getRemoteDataEmoticons;
+ (id)getRemoteDataEmoticonsOfCount:;
+ (BOOL)isFetchedRemoteDataEmoticons;
+ (id)quickEmoticonRecentlyUsed;
+ (void)recordEmoticonUsed:;
+ (void)recordQuickEmoticonUsed:;
@end
