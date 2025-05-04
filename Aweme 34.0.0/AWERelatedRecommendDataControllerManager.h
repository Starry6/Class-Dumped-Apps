@interface AWERelatedRecommendDataControllerManager : NSObject
@property (nonatomic) AWEListDataController<AWERelatedRecommendListBaseDataControllerProtocol> outerDataController;
@property (nonatomic) NSString itemID;
- (void)setOuterDataController:;
- (id)outerDataController;
- (id)getDataControllerWithModel:isDataNoDiff:;
- (id)itemID;
- (void)setItemID:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
