@interface AWETeenUserProfileLocalNumManager : NSObject
@property (nonatomic) NSNumber likeNum;
@property (nonatomic) NSNumber collectNum;
@property (nonatomic) NSDate lockLikeNumExpiryDate;
- (id)collectNum;
- (void)setCollectNum:;
- (id)currentUserLikeNum;
- (BOOL)isLockLikeNumUpdate;
- (void)updateUserLikeNum:;
- (void)lockLikeNum:;
- (void)updateUserCollectionNum:;
- (void)resetAllNum;
- (id)lockLikeNumExpiryDate;
- (id)likeNum;
- (void)setLikeNum:;
- (void)setLockLikeNumExpiryDate:;
- (void)increaseUserLikeNum;
- (void)increaseUserCollectionNum;
- (void)decreaseUserLikeNum;
- (void)decreaseUserCollectionNum;
- (id)currentUserCollectNum;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
