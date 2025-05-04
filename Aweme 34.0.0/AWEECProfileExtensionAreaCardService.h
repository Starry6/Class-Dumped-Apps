@interface AWEECProfileExtensionAreaCardService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)storeSourceParamsWithExtraInfoDic:;
- (Class)newProfileExtensionAreaCardControllerClass;
- (void)handleProfileExtensionAreaActionWithType:userModel:schema:;
- (Class)newProfileExtensionAreaMyOrderListCardControllerClass;
- (void)handleProfileExtensionAreaActionWithType:userModel:schema:cardModel:extraInfo:cardIndex:isDotViewShow:cardData:shouldTrackAppearEvent:;
- (id)commonTrackParamsByExtraInfoDic:userModel:cardData:cardModel:cardIndex:isDotViewShow:userIsMaster:;
@end
