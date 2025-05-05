@interface IPAAutoSettings : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) BOOL pending;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)identifier;
- (unsigned long long)hash;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)description;
- (id)initWithIdentifier:;
- (BOOL)pending;
- (BOOL)isEqual:;
- (id)archiveDictionary;
- (BOOL)applyArchiveDictionary:;
- (BOOL)_applyArchiveDictionary:;
- (void)_archiveIntoDictionary:;
- (BOOL)isEqualToAutoSettings:;
+ (id)pendingWithIdentifier:;
@end
