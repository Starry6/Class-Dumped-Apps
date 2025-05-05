@interface AFBulletinAction : NSObject
@property (nonatomic) NSMutableSet titleVariants;
@property (nonatomic) BBAction bbAction;
@property (nonatomic) NSString bbActionID;
- (void).cxx_destruct;
- (id)initWithBulletinAction:;
- (void)addTitleVariant:;
- (id)getTitleVariants;
- (id)bbAction;
- (id)bbActionID;
- (id)titleVariants;
- (void)setTitleVariants:;
@end
