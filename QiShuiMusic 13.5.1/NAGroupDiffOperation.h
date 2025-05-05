@interface NAGroupDiffOperation : NSObject
@property (nonatomic) <NADiffableItemGroup> group;
@property (nonatomic) NSNumber fromIndex;
@property (nonatomic) NSNumber toIndex;
@property (nonatomic) Q type;
@property (nonatomic) NSString operationDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)hash;
- (id)operationDescription;
- (id)group;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)fromIndex;
- (id)toIndex;
- (id)initWithOperationType:group:fromIndex:toIndex:;
- (id)_operationDescriptionWithVerboseType:;
+ (id)insertOperationWithGroup:atIndex:;
+ (id)deleteOperationWithGroup:atIndex:;
+ (id)moveOperationWithGroup:fromIndex:toIndex:;
@end
