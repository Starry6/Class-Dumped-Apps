@interface AWECommentMiniEmoticonPanelManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogoutWithUid:;
- (id)aAWECommentRecentUsedEmojiDOUYINHTSAdapter;
- (id)init;
- (void)dealloc;
+ (void)recordEmoticonUsed:;
+ (id)getRemoteDataEmoticons;
+ (id)getRecentlyUsedEmoticons;
+ (BOOL)isUsedRemoteDataEmoticons;
+ (id)getFinalDataEmoticonsWithCount:;
+ (id)getRecentlyUsedEmoticonsOfCount:;
+ (id)getRemoteDataEmoticonsOfCount:;
+ (id)defaultEmoticons;
+ (void)checkEmoticonsValid:expectedCount:;
+ (Class)aAWECommentRecentUsedEmojiDOUYINHTSAdapterClass;
+ (BOOL)isFetchedRemoteDataEmoticons;
@end
