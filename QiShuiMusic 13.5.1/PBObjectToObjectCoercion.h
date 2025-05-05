@interface PBObjectToObjectCoercion : NSObject
@property (nonatomic) # theClass;
@property (nonatomic) NSMutableDictionary blockByClass;
@property (nonatomic) NSMutableOrderedSet orderedClassNames;
- (void).cxx_destruct;
- (id)initWithClass:;
- (Class)theClass;
- (void)setTheClass:;
- (void)addCoercionToClass:block:;
- (id)availableClasses;
- (BOOL)canCoerceToObjectOfClass:;
- (id)coerceObject:toObjectOfClass:outError:;
- (id)blockByClass;
- (void)setBlockByClass:;
- (id)orderedClassNames;
- (void)setOrderedClassNames:;
@end
