@interface AWEUserDynamicLikeModel : NSObject
@property (nonatomic) NSArray likeList;
@property (nonatomic) NSString userID;
@property (nonatomic) NSString name;
@property (nonatomic) NSArray avatarArray;
@property (nonatomic) NSNumber allLikeCount;
@property (nonatomic) NSNumber likeCount;
@property (nonatomic) NSNumber dynamicTime;
@property (nonatomic) NSArray itemIDList;
- (void)setLikeCount:;
- (void)setAvatarArray:;
- (id)avatarArray;
- (id)itemIDList;
- (void)setItemIDList:;
- (id)likeList;
- (void)setLikeList:;
- (id)allLikeCount;
- (void)setAllLikeCount:;
- (id)dynamicTime;
- (void)setDynamicTime:;
- (id)userID;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (void)setUserID:;
- (id)likeCount;
@end
