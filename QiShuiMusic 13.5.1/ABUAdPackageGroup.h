@interface ABUAdPackageGroup : ABUAdPackage
@property (nonatomic) <_ABUAdPackageGroupLink> next;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)_containsPackage:;
- (void)appendPackage:;
- (void)enumPackagesWithBlock:;
- (void)updateWithBlock:;
- (id)next;
- (void)setNext:;
- (void).cxx_destruct;
- (id)value;
- (id)_last;
- (void)setReuseIdentifier:;
- (void)setLinkID:;
+ (id)convertFromPackage:;
+ (id)packageWithPackage:;
+ (id)packageWithPackages:;
@end
