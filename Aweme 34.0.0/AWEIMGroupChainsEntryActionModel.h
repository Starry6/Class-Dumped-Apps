@interface AWEIMGroupChainsEntryActionModel : MTLModel
@property (nonatomic) NSArray addEntry;
@property (nonatomic) NSArray modifyEntry;
@property (nonatomic) NSArray deleteEntry;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)addEntry;
- (void)setAddEntry:;
- (id)modifyEntry;
- (void)setModifyEntry:;
- (void)setDeleteEntry:;
- (void).cxx_destruct;
- (id)deleteEntry;
+ (id)JSONKeyPathsByPropertyKey;
@end
