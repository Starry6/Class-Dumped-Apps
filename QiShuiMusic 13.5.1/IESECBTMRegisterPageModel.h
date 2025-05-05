@interface IESECBTMRegisterPageModel : NSObject
@property (nonatomic) NSString pageBtm;
@property (nonatomic) NSString sourceBtmToken;
@property (nonatomic) BOOL manullyManageController;
@property (nonatomic) BOOL isHybridContainer;
- (id)pageBtm;
- (BOOL)isHybridContainer;
- (BOOL)manullyManageController;
- (void)setIsHybridContainer:;
- (void)setManullyManageController:;
- (void)setPageBtm:;
- (void)setSourceBtmToken:;
- (id)sourceBtmToken;
- (void).cxx_destruct;
@end
