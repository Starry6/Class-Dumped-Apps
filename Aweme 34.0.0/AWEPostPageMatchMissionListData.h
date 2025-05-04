@interface AWEPostPageMatchMissionListData : NSObject
@property (nonatomic) NSMutableArray secRows;
@property (nonatomic) NSArray sortDescriptor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bindServices:;
- (id)listData;
- (void)configSection:atIndex:;
- (id)secRows;
- (void)setSecRows:;
- (id)sortDescriptor;
- (void).cxx_destruct;
- (void)sortItems;
- (void)addItem:;
- (void)setSortDescriptor:;
@end
