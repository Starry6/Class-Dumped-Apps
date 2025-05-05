@interface IESECListKitCellRegister : NSObject
@property (nonatomic) NSMutableDictionary cellControllerClassMap;
- (id)cellControllerClassMap;
- (Class)getCellClassForItem:;
- (Class)getCellControllerClassForItem:;
- (Class)getCellModelClassForItem:;
- (void)registerCellControllerClass:withItemType:;
- (void)setCellControllerClassMap:;
- (id)init;
- (void).cxx_destruct;
+ (id)defaultRegister;
@end
