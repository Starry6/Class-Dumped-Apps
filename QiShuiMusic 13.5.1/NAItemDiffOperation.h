@interface NAItemDiffOperation : NSObject
@property (nonatomic) @ item;
@property (nonatomic) NSIndexPath fromIndexPath;
@property (nonatomic) NSIndexPath toIndexPath;
@property (nonatomic) Q type;
@property (nonatomic) NSString operationDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)item;
- (unsigned long long)hash;
- (id)operationDescription;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)_operationDescriptionWithVerboseType:;
- (id)initWithOperationType:item:fromIndexPath:toIndexPath:;
- (id)fromIndexPath;
- (id)toIndexPath;
+ (id)insertOperationWithItem:atIndexPath:;
+ (id)deleteOperationWithItem:atIndexPath:;
+ (id)moveOperationWithItem:fromIndexPath:toIndexPath:;
+ (id)reloadOperationWithItem:atIndexPath:;
@end
