@interface AWEECCartAnchorPitayaService : HTSService
@property (nonatomic) NSMapTable handlers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onServiceInit;
- (void)registerPitayaMessageHandler;
- (void)postHandlesShowSecondLineWithAwemeID:;
- (id)handlers;
- (void)setHandlers:;
- (void).cxx_destruct;
- (void)addHandler:;
@end
