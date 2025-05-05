@interface GEOConfigStorageFallbackWriter : GEOConfigStorageFallbackReader
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithStorage:writer:;
- (void)setConfigValue:forKey:options:synchronous:;
- (void).cxx_destruct;
@end
