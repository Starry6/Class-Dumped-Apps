@interface AWEBTMRegisterPageModel : NSObject
@property (nonatomic) NSString pageBtm;
@property (nonatomic) NSString sourceBtmToken;
@property (nonatomic) BOOL manullyManageController;
@property (nonatomic) BOOL isHybridContainer;
- (void)setSourceBtmToken:;
- (void)setPageBtm:;
- (void)setIsHybridContainer:;
- (void)setManullyManageController:;
- (id)pageBtm;
- (id)sourceBtmToken;
- (BOOL)manullyManageController;
- (BOOL)isHybridContainer;
- (void).cxx_destruct;
@end
