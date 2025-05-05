@interface EKRelation : NSObject
@property (nonatomic) BOOL toMany;
@property (nonatomic) NSSet inversePropertyNames;
@property (nonatomic) BOOL ownsRelatedObject;
@property (nonatomic) @? inversePropertyIsApplicable;
- (BOOL)ownsRelatedObject;
- (id)inversePropertyNames;
- (BOOL)toMany;
- (void)setInversePropertyIsApplicable:;
- (id)inversePropertyIsApplicable;
- (void).cxx_destruct;
- (id)description;
- (BOOL)shouldSetInverseProperty:onObject:forObject:;
- (id)initWithEntityName:toMany:inversePropertyNames:ownsRelated:;
+ (id)relationWithEntityName:toMany:inversePropertyNames:;
+ (id)relationWithEntityName:toMany:inversePropertyNames:ownsRelated:;
@end
