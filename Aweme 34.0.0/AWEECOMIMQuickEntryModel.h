@interface AWEECOMIMQuickEntryModel : MTLModel
@property (nonatomic) NSArray operationList;
@property (nonatomic) NSSet shouldRemoveItemTypeArrays;
@property (nonatomic) BOOL localData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)shouldRemoveItemTypeArrays;
- (void)setShouldRemoveItemTypeArrays:;
- (void)setOperationList:;
- (id)operationList;
- (void).cxx_destruct;
- (BOOL)localData;
- (void)setLocalData:;
+ (id)operationListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
