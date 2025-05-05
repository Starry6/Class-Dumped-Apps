@interface CNUIUserActionListModel : NSObject
@property (nonatomic) CNUIUserActionItem defaultAction;
@property (nonatomic) NSArray actions;
@property (nonatomic) NSArray directoryServiceActions;
@property (nonatomic) NSArray foundOnDeviceActions;
@property (nonatomic) BOOL isEmpty;
- (BOOL)isEmpty;
- (void)setDefaultAction:;
- (void)setActions:;
- (id)defaultAction;
- (id)actions;
- (void).cxx_destruct;
- (id)description;
- (id)allActions;
- (id)initWithModel:actions:;
- (id)directoryServiceActions;
- (void)setDirectoryServiceActions:;
- (id)foundOnDeviceActions;
- (void)setFoundOnDeviceActions:;
- (id)initWithDefaultAction:actions:directoryServiceActions:foundOnDeviceActions:;
+ (id)emptyModel;
@end
