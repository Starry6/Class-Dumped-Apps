@interface AWEModernFeedCellManager : NSObject
@property (nonatomic) NSMutableDictionary registeredPatterns;
@property (nonatomic) NSMutableArray asyncRegisteredPatternArray;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bundleDidActived:machoHeader:fromBundle:enterTag:cost:;
- (id)cellTypeForItem:;
- (Class)controllerClassForType:;
- (void)setRegisteredPatterns:;
- (void)setAsyncRegisteredPatternArray:;
- (void)registerControllerClass:itemPredicateBlock:isStatic:;
- (id)registeredPatterns;
- (id)asyncRegisteredPatternArray;
- (id)lazyLoadedRegisteredPatterns;
- (id)cellTypeForItemRegisterIfNeeded:;
- (id)dynamicCellTypes;
- (id)accessoryTypeForCellType:;
- (Class)attachmentControllerClass;
- (void)registerControllerClass:itemPredicateBlock:;
- (void)registerControllerClass:itemPredicateBlock:asyncCellTypeBlock:;
- (void)registerControllerClass:forStaticType:;
- (id)init;
- (void).cxx_destruct;
- (id)allTypes;
+ (void)_aweLazyRegisterLoad;
+ (id)sharedInstance;
@end
