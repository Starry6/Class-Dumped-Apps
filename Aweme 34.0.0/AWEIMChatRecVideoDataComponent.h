@interface AWEIMChatRecVideoDataComponent : AWEIMComponentBase
@property (nonatomic) NSMutableSet sentItemIDs;
@property (nonatomic) NSMutableDictionary itemMap;
@property (nonatomic) NSArray awemeModels;
@property (nonatomic) AWEIMChatRecommendVideoResponseModel resModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (id)awemeModels;
- (id)itemMap;
- (void)setAwemeModels:;
- (void)requestDataWithCompletion:;
- (void)setItemMap:;
- (BOOL)hasSentAwemeModelInThisLife:;
- (void)sendAwemeModel:;
- (BOOL)hasSentAwemeIDInThisLife:;
- (id)getAwemeModelOfItemID:;
- (id)getAwemeModelAtIndexPath:;
- (id)getDataController;
- (void)setSentItemIDs:;
- (void)requestVideoModels:requestScene:completion:;
- (id)sentItemIDs;
- (id)resModel;
- (void)setResModel:;
- (void).cxx_destruct;
@end
