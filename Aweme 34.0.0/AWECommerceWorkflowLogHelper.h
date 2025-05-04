@interface AWECommerceWorkflowLogHelper : HTSService
@property (nonatomic) MMKV mmkv;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getObjectOfClass:forKey:;
- (void)setMmkv:;
- (id)mmkv;
- (void)upLoadWorkflowLogWithData:;
- (void)initializeDB;
- (id)init;
- (void)removeValueForKey:;
- (void)clearAll;
- (void).cxx_destruct;
- (id)allKeys;
- (void)setObject:forKey:;
@end
