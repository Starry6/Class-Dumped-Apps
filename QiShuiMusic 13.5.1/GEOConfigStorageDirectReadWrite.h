@interface GEOConfigStorageDirectReadWrite : GEOConfigStorageDirectReadOnly
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)setConfigValue:forKey:options:synchronous:;
- (id)initWithPath:forSource:;
- (void).cxx_destruct;
@end
