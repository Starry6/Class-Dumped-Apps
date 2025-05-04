@interface AWEBaseTabListViewModel : NSObject
@property (nonatomic) @ headerModel;
@property (nonatomic) @ defaultTabItemModel;
@property (nonatomic) NSArray tabItemModelsArray;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)tabItemModelsArray;
- (void)updateTabItemModelsArray:;
- (void)updateHeaderModel:;
- (void)updateTabItemModelsArray:defaultTabItemModel:;
- (id)defaultTabItemModel;
- (void)setDefaultTabItemModel:;
- (void)setTabItemModelsArray:;
- (void).cxx_destruct;
- (void)setHeaderModel:;
- (id)headerModel;
+ (BOOL)automaticallyNotifiesObserversForKey:;
@end
