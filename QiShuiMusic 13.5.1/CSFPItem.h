@interface CSFPItem : NSObject
@property (nonatomic) NSString providerIdentifier;
@property (nonatomic) NSString itemIdentifier;
@property (nonatomic) CSSearchableItem searchableItem;
- (id)itemIdentifier;
- (id)providerIdentifier;
- (id)searchableItem;
- (void).cxx_destruct;
- (id)initWithFPItem:;
+ (id)itemWithFileURL:;
+ (id)itemWithFileURL:forEUID:;
@end
