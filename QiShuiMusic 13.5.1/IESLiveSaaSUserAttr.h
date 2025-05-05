@interface IESLiveSaaSUserAttr : BDDynamicMTLModel
@property (nonatomic) BOOL isMuted;
@property (nonatomic) BOOL isAdmin;
@property (nonatomic) NSMutableArray adminPrivilegesArray;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)adminPrivilegesArray;
- (void)setAdminPrivilegesArray:;
- (void)setIsAdmin:;
- (BOOL)isMuted;
- (void).cxx_destruct;
- (void)setIsMuted:;
- (BOOL)isAdmin;
+ (id)JSONKeyPathsByPropertyKey;
@end
