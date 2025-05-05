@interface FPXFakeDefaultDomainExtension : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithDomain:;
- (id)fetchContentsForItemWithIdentifier:version:request:completionHandler:;
- (id)createItemBasedOnTemplate:fields:contents:options:request:completionHandler:;
- (id)modifyItem:baseVersion:changedFields:contents:options:request:completionHandler:;
- (id)enumeratorForContainerItemIdentifier:request:error:;
- (id)itemForIdentifier:request:completionHandler:;
- (id)deleteItemWithIdentifier:baseVersion:options:request:completionHandler:;
- (void)invalidate;
@end
