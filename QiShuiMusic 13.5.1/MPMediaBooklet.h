@interface MPMediaBooklet : NSObject
@property (nonatomic) Q itemPersistentID;
@property (nonatomic) NSString name;
@property (nonatomic) q storeItemID;
@property (nonatomic) NSString redownloadParams;
@property (nonatomic) q fileSize;
- (long long)fileSize;
- (long long)storeItemID;
- (void)setStoreItemID:;
- (void)setName:;
- (void)setFileSize:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (unsigned long long)itemPersistentID;
- (void)setItemPersistentID:;
- (id)redownloadParams;
- (void)setRedownloadParams:;
@end
