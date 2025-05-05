@interface LNFetchMDMPropertiesConnectionOperation : LNInterfaceConnectionOperation
@property (nonatomic) LNAction action;
@property (nonatomic) NSString accountIdentifier;
@property (nonatomic) @? completionHandler;
- (void)setAccountIdentifier:;
- (id)accountIdentifier;
- (void)start;
- (void)setCompletionHandler:;
- (id)action;
- (void).cxx_destruct;
- (void)finishWithError:;
- (id)completionHandler;
- (id)initWithConnectionInterface:action:completionHandler:;
@end
