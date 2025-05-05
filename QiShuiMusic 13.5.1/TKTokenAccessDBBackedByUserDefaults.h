@interface TKTokenAccessDBBackedByUserDefaults : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void).cxx_destruct;
- (long long)fetchAccessForRequest:;
- (void)storeAccess:forRequest:;
- (void)clearAllAccessRecords;
- (id)_keyRefForRequest:;
@end
