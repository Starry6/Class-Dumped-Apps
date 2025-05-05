@interface EDSearchableIndexPendingItem : NSObject
@property (nonatomic) NSMutableArray items;
@property (nonatomic) NSString identifier;
@property (nonatomic) <EDIndexableItem> referenceItem;
@property (nonatomic) Q estimatedSizeInBytes;
@property (nonatomic) BOOL requiresPreprocessing;
- (void)addItem:;
- (id)items;
- (id)identifier;
- (unsigned long long)hash;
- (void)setItems:;
- (long long)compare:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithItem:;
- (unsigned long long)estimatedSizeInBytes;
- (BOOL)requiresPreprocessing;
- (void)addPendingItem:;
- (id)referenceItem;
@end
