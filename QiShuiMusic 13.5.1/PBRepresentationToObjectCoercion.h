@interface PBRepresentationToObjectCoercion : NSObject
@property (nonatomic) # theClass;
@property (nonatomic) NSMutableDictionary blockByType;
@property (nonatomic) NSMutableOrderedSet typeOrder;
- (void).cxx_destruct;
- (id)initWithClass:;
- (Class)theClass;
- (void)setTheClass:;
- (id)typeOrder;
- (void)setTypeOrder:;
- (void)addCoercionFromType:block:;
- (id)availableImportTypes;
- (BOOL)canCoerceFromType:;
- (id)createObjectFromRepresentationConformingToType:data:URL:outError:;
- (id)blockByType;
- (void)setBlockByType:;
@end
