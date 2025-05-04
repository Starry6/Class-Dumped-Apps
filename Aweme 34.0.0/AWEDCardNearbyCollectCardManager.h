@interface AWEDCardNearbyCollectCardManager : NSObject
@property (nonatomic) AWEAwemeModel lastCollectionCard;
@property (nonatomic) BOOL hasShownCard;
@property (nonatomic) BOOL hasInsertedCard;
@property (nonatomic) <AWEDCardBaseManagerProtocol> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)willDeleteDCard:;
- (void)willDisplayDCard:;
- (BOOL)checkIfCanInsertDCard:;
- (void)didInsertDCard:targetIndex:totalFeedCount:;
- (id)managerScene;
- (void)setLastCollectionCard:;
- (void)setHasInsertedCard:;
- (void)setHasShownCard:;
- (id)lastCollectionCard;
- (BOOL)hasShownCard;
- (BOOL)hasInsertedCard;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
