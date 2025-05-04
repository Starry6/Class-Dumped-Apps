@interface AWEFeedShareReflowCardAndVideoManager : NSObject
@property (nonatomic) <AWEFeedShareReflowCardAndVideoDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)impressionShareReflowUser:;
- (BOOL)shouldFetchCard:dataList:processModel:;
- (void)fetchCardWithUID:completion:;
- (BOOL)existedCardInPlayList:currentPlayIndex:;
- (BOOL)canInsertToListAfterFetchCard:;
- (BOOL)isVideoBelongToShareReflow:;
- (void)trackTokenFindReturnWhenVideoInsertToFeed:;
- (BOOL)isCurrentHotFeedVC;
- (id)showRule:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
+ (id)sharedInstance;
@end
