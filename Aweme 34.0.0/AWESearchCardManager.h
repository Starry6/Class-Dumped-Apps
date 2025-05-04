@interface AWESearchCardManager : NSObject
@property (nonatomic) NSDictionary typeToCardMap;
@property (nonatomic) NSMutableDictionary dynamicTypeToClassMap;
@property (nonatomic) NSArray classNames;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cellTypeForItem:;
- (Class)controllerClassForType:;
- (id)cellTypeForItemRegisterIfNeeded:;
- (id)dynamicCellTypes;
- (id)accessoryTypeForCellType:;
- (Class)attachmentControllerClass;
- (void)setTypeToCardMap:;
- (id)typeToCardMap;
- (id)dynamicTypeToClassMap;
- (void)setDynamicTypeToClassMap:;
- (void).cxx_destruct;
- (id)allTypes;
- (id)classNames;
- (void)setClassNames:;
+ (id)sharedInstance;
@end
