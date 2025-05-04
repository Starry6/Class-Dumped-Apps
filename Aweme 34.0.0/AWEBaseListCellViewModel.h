@interface AWEBaseListCellViewModel : NSObject
@property (nonatomic) @ model;
@property (nonatomic) NSString viewModelId;
@property (nonatomic) q index;
@property (nonatomic) @? markDeletedBlock;
- (void)setupWithModel:;
- (void)setViewModelId:;
- (id)markDeletedBlock;
- (id)viewModelId;
- (void)setMarkDeletedBlock:;
- (void)setIndex:;
- (void)setModel:;
- (long long)index;
- (id)initWithModel:;
- (id)model;
- (void).cxx_destruct;
- (void)markDeleted;
+ (id)viewModelWithModel:;
@end
