@interface AWELandscapeSplitScreenPreloadModel : NSObject
@property (nonatomic) NSString userID;
@property (nonatomic) NSString itemID;
@property (nonatomic) <AWELandscapeSpiltScreenDataControllerProtocol> dataController;
- (void)setDataController:;
- (id)itemID;
- (id)userID;
- (void)setItemID:;
- (void).cxx_destruct;
- (void)setUserID:;
- (id)dataController;
@end
