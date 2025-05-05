@interface IMKeyValueCollectionUserDefaultsStorage : NSObject
@property (nonatomic) NSString domain;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithDomain:;
- (id)init;
- (void)setObject:forKey:;
- (id)setWithMutableClassIfApplicableFor:;
- (id)_decodeData:forKey:;
- (id)_actuallyReadObjectForKey:;
- (id)objectForKey:;
- (void).cxx_destruct;
- (id)description;
- (id)domain;
- (void)removeObjectForKey:;
- (void)_actuallyWriteObject:forKey:;
- (id)copyWithZone:;
@end
