@interface IESLiveInteractComponentDefineExtra : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString desc;
@property (nonatomic) NSArray owners;
@property (nonatomic) Q loadRole;
@property (nonatomic) Q loadModule;
@property (nonatomic) NSArray loadTargets;
- (void)setLoadTargets:;
- (unsigned long long)loadRole;
- (id)loadTargets;
- (void)setLoadModule:;
- (void)setLoadRole:;
- (void)setName:;
- (id)desc;
- (void)setDesc:;
- (void).cxx_destruct;
- (id)name;
- (void)setOwners:;
- (id)owners;
- (unsigned long long)loadModule;
@end
