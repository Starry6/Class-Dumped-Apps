@interface EFOrderedCollectionGroupedInsertionByObject : NSObject
@property (nonatomic) NSArray objects;
@property (nonatomic) @ previousObject;
@property (nonatomic) @ nextObject;
@property (nonatomic) BOOL isMove;
- (id)nextObject;
- (id)objects;
- (void).cxx_destruct;
- (BOOL)isMove;
- (id)initWithObjects:previousObject:nextObject:isMove:;
- (id)previousObject;
@end
