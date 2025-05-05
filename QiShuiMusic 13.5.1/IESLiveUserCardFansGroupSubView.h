@interface IESLiveUserCardFansGroupSubView : UIView
@property (nonatomic) IESLiveUserCardStore store;
@property (nonatomic) q itemType;
- (id)initWithUserCardStore:itemType:;
- (id)formatDouble:;
- (void)generateIconWithImage:completion:;
- (id)getShowTextWithCountStr:andSubStr:;
- (id)getShowTextWithNumber:;
- (void)setItemType:;
- (void)setStore:;
- (long long)itemType;
- (void).cxx_destruct;
- (id)store;
- (void)setupUI;
@end
