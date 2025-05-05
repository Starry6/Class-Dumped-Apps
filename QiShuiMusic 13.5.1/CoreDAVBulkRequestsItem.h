@interface CoreDAVBulkRequestsItem : CoreDAVItem
@property (nonatomic) NSDictionary dictRepresentation;
@property (nonatomic) CoreDAVLeafItem maxResourcesItem;
@property (nonatomic) CoreDAVLeafItem maxSizeItem;
@property (nonatomic) NSSet supportedItems;
@property (nonatomic) q maxResources;
@property (nonatomic) q maxSize;
@property (nonatomic) BOOL supportsInsert;
@property (nonatomic) BOOL supportsUpdate;
@property (nonatomic) BOOL supportsDelete;
- (long long)maxSize;
- (id)init;
- (BOOL)supportsUpdate;
- (void)setMaxResourcesItem:;
- (void)setMaxSizeItem:;
- (id)supportedItems;
- (void)addSupportedItem:;
- (long long)maxResources;
- (id)dictRepresentation;
- (id)maxSizeItem;
- (id)maxResourcesItem;
- (void).cxx_destruct;
- (id)description;
- (BOOL)supportsItemWithNameSpace:name:;
- (BOOL)supportsInsert;
- (BOOL)supportsDelete;
+ (id)copyParseRules;
@end
