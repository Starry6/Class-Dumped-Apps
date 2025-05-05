@interface IESLivePortalPiperHandler : NSObject
@property (nonatomic) <IESLivePortalActions> actionCreator;
@property (nonatomic) BOOL shouldLazyCreateCallHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setShouldLazyCreateCallHandler:;
- (id)actionCreator;
- (id)portalActionCallHandler;
- (void)registerHandlerWithBridge:;
- (void)setActionCreator:;
- (BOOL)shouldLazyCreateCallHandler;
- (void).cxx_destruct;
@end
