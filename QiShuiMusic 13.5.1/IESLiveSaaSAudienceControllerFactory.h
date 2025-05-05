@interface IESLiveSaaSAudienceControllerFactory : NSObject
@property (nonatomic) NSString sourcePage;
@property (nonatomic) IESLiveSaaSComponentContext componentContext;
- (id)componentContext;
- (id)controllerWithConfig:;
- (id)controllerWithController:byReplaceLiveRoomModel:pageContext:parentDIContext:;
- (id)controllerWithEnterRoomAisle:;
- (id)controllerWithLiveRoomModel:player:pageContext:parentDIContext:disablePip:roomDrawModel:;
- (id)controllerWithLiveRoomModel:player:pageContext:parentDIContext:isFromAD:disablePip:roomDrawModel:;
- (void)setComponentContext:;
- (void)setSourcePage:;
- (id)sourcePage;
- (void).cxx_destruct;
@end
