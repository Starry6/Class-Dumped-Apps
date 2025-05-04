@interface AWENewStoryModel : AWEBaseApiModel
@property (nonatomic) NSString itemID;
@property (nonatomic) AWEAwemeModel story;
@property (nonatomic) BOOL isUnread;
@property (nonatomic) BOOL isOfficialStory;
@property (nonatomic) BOOL hasFetched;
@property (nonatomic) q index;
@property (nonatomic) q itemCount;
- (id)story;
- (void)setStory:;
- (void)setHasFetched:;
- (void)setIsUnread:;
- (void)setIsOfficialStory:;
- (BOOL)isOfficialStory;
- (void)setIndex:;
- (long long)index;
- (id)itemID;
- (void)setItemID:;
- (BOOL)isUnread;
- (long long)itemCount;
- (void).cxx_destruct;
- (void)setItemCount:;
- (BOOL)hasFetched;
+ (id)storyJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
