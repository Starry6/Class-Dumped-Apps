@interface IESLiveUserCardTagList : NSObject
@property (nonatomic) IESLiveUserProfile userProfile;
@property (nonatomic) NSMutableArray itemList;
- (void)bindData:;
- (BOOL)checkItem:;
- (id)itemClassRegister:;
- (id)init;
- (void).cxx_destruct;
- (id)itemList;
- (void)setItemList:;
- (id)userProfile;
- (void)setUserProfile:;
@end
