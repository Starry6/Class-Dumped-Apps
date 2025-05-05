@interface ISStoreIndex : NSObject
@property (nonatomic) NSURL indexFileURL;
@property (nonatomic) NSData data;
@property (nonatomic) ^{os_unfair_lock_s=I} dataLock;
- (BOOL)validate;
- (id)data;
- (void)enumerateValuesWithBock:;
- (id)dataLock;
- (void).cxx_destruct;
- (void)_internalSetData:;
- (id)description;
- (id)indexFileURL;
- (void)enumerateValuesForUUID:bock:;
- (void)invalidate;
- (id)_internalData;
- (id)initWithStoreFileURL:;
@end
