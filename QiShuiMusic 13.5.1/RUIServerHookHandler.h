@interface RUIServerHookHandler : NSObject
@property (nonatomic) NSArray serverHooks;
@property (nonatomic) <RUIServerHookHandlerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDelegate:;
- (id)delegate;
- (BOOL)isUserCancelError:;
- (void).cxx_destruct;
- (void)dismissObjectModelsAnimated:completion:;
- (id)initWithRemoteUIController:;
- (void)processObjectModel:isModal:;
- (void)processServerResponse:;
- (id)presentationContextForHook:;
- (id)initWithRemoteUIController:hooks:;
- (void)setServerHooks:;
- (id)serverHooks;
- (void)processObjectModel:isModal:completion:;
- (void)_rebuildServerHookHandlers;
- (void)_handleResponseForHook:success:error:attributes:objectModel:completion:;
- (id)currentPresenter;
- (id)_responseDataForResult:withError:;
- (void)refreshWithRequest:completion:;
- (void)_reloadUIWithInfo:attributes:initiatingObjectModel:completion:;
- (id)_refreshRequestWithInfo:initiatingObjectModel:attributes:;
@end
