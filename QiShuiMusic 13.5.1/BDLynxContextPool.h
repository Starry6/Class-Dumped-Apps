@interface BDLynxContextPool : NSObject
@property (nonatomic) NSMutableDictionary sharedPipers;
@property (nonatomic) NSMutableArray cardPool;
@property (nonatomic) NSMutableArray cardsInUse;
- (id)cardWithSchema:;
- (void)addLynxContext:schema:;
- (id)cardPool;
- (id)cardsInUse;
- (BOOL)contextExistsWithSchema:;
- (void)setCardPool:;
- (void)setCardsInUse:;
- (void)setSharedPipers:;
- (id)sharedPipers;
- (id)init;
- (void).cxx_destruct;
- (void)removeContext:;
+ (id)sharedInstance;
@end
