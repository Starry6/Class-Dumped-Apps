@interface CoreDAVBulkRequestsSetItem : CoreDAVItem
@property (nonatomic) NSDictionary dictRepresentation;
@property (nonatomic) CoreDAVBulkRequestsItem crudItem;
@property (nonatomic) CoreDAVBulkRequestsItem simpleItem;
- (id)init;
- (void)setCrudItem:;
- (id)crudItem;
- (id)dictRepresentation;
- (void).cxx_destruct;
- (id)description;
- (id)simpleItem;
- (void)setSimpleItem:;
+ (id)copyParseRules;
@end
