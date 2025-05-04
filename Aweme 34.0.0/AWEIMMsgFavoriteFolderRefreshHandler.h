@interface AWEIMMsgFavoriteFolderRefreshHandler : AWEIMMsgBaseRefreshHandler
@property (nonatomic) Q requestInterval;
@property (nonatomic) <AWEIMMessageListComponentCenter> componentCenter;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)supportRefreshMessage:;
- (BOOL)supportRefreshStrategy:;
- (void)refrshResourceStateFor:forViewModels:strategy:;
- (id)arrayToJsonString:;
+ (BOOL)supportRefresh;
+ (long long)getRefreshHandlerType;
+ (id)getStorableFavoriteFolderUnavaliableReason:;
+ (id)getStorableCollectsCount:;
+ (id)getStorableFavoriteFolderName:;
+ (void)setStorableCollectsCount:uniqueId:;
+ (void)setStorableFavoriteFolderUnavaliableReason:uniqueId:;
+ (void)setStorableFavoriteFolderName:uniqueId:;
@end
