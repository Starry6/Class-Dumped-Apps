@interface PBObjectToRepresentationCoercion : NSObject
@property (nonatomic) # theClass;
@property (nonatomic) NSMutableDictionary coercionBlockByType;
@property (nonatomic) NSMutableOrderedSet typeOrder;
- (void).cxx_destruct;
- (id)initWithClass:;
- (void)addCoercionToType:block:;
- (id)availableExportTypes;
- (BOOL)canCoerceToType:;
- (void)createRepresentationOfType:fromObject:completionBlock:;
- (Class)theClass;
- (void)setTheClass:;
- (id)coercionBlockByType;
- (void)setCoercionBlockByType:;
- (id)typeOrder;
- (void)setTypeOrder:;
@end
