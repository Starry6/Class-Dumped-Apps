@interface AWEHotSpotUserSentCommentCacheManager : NSObject
@property (nonatomic) Q offset;
@property (nonatomic) NSMutableArray commentsArray;
@property (nonatomic) NSString hotSpotWord;
- (id)hotSpotWord;
- (void)setHotSpotWord:;
- (void)onExitGeneralSearch;
- (id)getCommentsFromHotSearchDiscussion;
- (id)getCommentsFromGeneralSearchDiscussion;
- (id)commentsArray;
- (void)setCommentsArray:;
- (id)init;
- (void)setOffset:;
- (unsigned long long)offset;
- (void).cxx_destruct;
- (void)addComment:;
+ (id)hotSpotWord;
+ (id)createInstanceWithHotSpotWord:;
+ (void)onExitGeneralSearch;
+ (id)getCommentsFromHotSearchDiscussion;
+ (id)getCommentsFromGeneralSearchDiscussion;
+ (id)sharedInstance;
+ (void)addComment:;
@end
