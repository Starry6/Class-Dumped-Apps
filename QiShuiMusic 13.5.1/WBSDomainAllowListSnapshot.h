@interface WBSDomainAllowListSnapshot : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)initWithPlistData:error:;
- (id)plistDataWithFormat:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithDomains:;
- (BOOL)isDomainAllowed:;
@end
