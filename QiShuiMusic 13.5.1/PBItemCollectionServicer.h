@interface PBItemCollectionServicer : NSObject
@property (nonatomic) PBItemCollection itemCollection;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (void)helloCompletionBlock:;
- (void)waitForItemRequestsDeliveryCompletion:;
- (id)itemCollection;
- (void)setItemCollection:;
- (void)loadRepresentationForItemAtIndex:type:completionBlock:;
- (void)callCleanupBlockWithUUID:;
- (id)initWithConnection:itemCollection:;
+ (id)newServicerForConnection:itemCollection:;
@end
