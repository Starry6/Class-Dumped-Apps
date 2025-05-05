@interface IESECGoodsListCardProviderServiceImpl : NSObject
@property (nonatomic) NSMutableArray managers;
@property (nonatomic) NSMutableDictionary selectedSKUItem;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)selectedSKUItem;
- (void)setSelectedSKUItem:;
- (id)managers;
- (void).cxx_destruct;
- (void)setManagers:;
+ (BOOL)isSimilarState:;
+ (id)cardview:envDelagate:;
+ (id)dealSearchparams:withJson:;
+ (id)getGoodsIDfromOriginJson:;
+ (id)getSourceVcWithRoomID:;
+ (BOOL)isShowingGoodsListView:;
+ (id)targetViewWithRoomID:;
+ (void)trackCardShowWithInfo:view:;
+ (id)cellIdentifier;
+ (id)getService;
@end
