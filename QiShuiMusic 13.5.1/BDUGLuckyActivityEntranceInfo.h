@interface BDUGLuckyActivityEntranceInfo : BDUGLuckyBDModel
@property (nonatomic) NSArray<BDUGLuckyResourceItem> resourceItems;
@property (nonatomic) NSString entryId;
@property (nonatomic) NSString extra;
- (id)entryId;
- (void)addResourceItem:;
- (void)removeResourceItem:;
- (id)resourceItems;
- (void)setEntryId:;
- (void)setExtra:;
- (void)setResourceItems:;
- (id)extra;
- (void).cxx_destruct;
+ (id)copyEntryInfoWithModel:;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
@end
