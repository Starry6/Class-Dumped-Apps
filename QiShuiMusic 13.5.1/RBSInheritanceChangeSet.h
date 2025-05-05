@interface RBSInheritanceChangeSet : NSObject
@property (nonatomic) NSSet gainedInheritances;
@property (nonatomic) NSSet lostInheritances;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithRBSXPCCoder:;
- (void)encodeWithRBSXPCCoder:;
- (id)initWithGainedInheritances:lostInheritances:;
- (id)lostInheritances;
- (id)gainedInheritances;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
+ (BOOL)supportsRBSXPCSecureCoding;
@end
