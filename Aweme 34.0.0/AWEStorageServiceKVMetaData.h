@interface AWEStorageServiceKVMetaData : NSObject
@property (nonatomic) NSString domain;
@property (nonatomic) NSString key;
@property (nonatomic) NSInteger useModule;
@property (nonatomic) BOOL backup;
@property (nonatomic) NSInteger type;
- (int)useModule;
- (void)setUseModule:;
- (BOOL)backup;
- (id)initWithDomain:key:;
- (void)setBackup:;
- (void)setKey:;
- (void)encodeWithCoder:;
- (void)setDomain:;
- (id)key;
- (id)domain;
- (int)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)initWithCoder:;
@end
