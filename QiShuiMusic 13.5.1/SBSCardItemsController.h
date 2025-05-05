@interface SBSCardItemsController : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_remoteInterfaceWithErrorHandler:;
- (void)_invalidateConnection;
- (void)dealloc;
- (void)setCardItems:;
- (void)getCardItemsWithHandler:;
- (void).cxx_destruct;
- (void)_connectToServerIfNecessary;
- (id)initWithIdentifier:;
- (void)_noteConnectionDropped;
@end
