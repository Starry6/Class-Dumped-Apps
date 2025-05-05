@interface WBSAutoplayQuirkWhitelistSnapshot : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)initWithPlistData:error:;
- (unsigned long long)hash;
- (id)plistDataWithFormat:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (unsigned long long)quirkTypeForDomain:;
@end
