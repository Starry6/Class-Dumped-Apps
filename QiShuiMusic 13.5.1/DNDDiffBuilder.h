@interface DNDDiffBuilder : NSObject
@property (nonatomic) @ object1;
@property (nonatomic) @ object2;
@property (nonatomic) NSString description;
@property (nonatomic) NSArray children;
@property (nonatomic) BOOL hasDifferences;
- (id)init;
- (id)children;
- (BOOL)hasDifferences;
- (void).cxx_destruct;
- (void)log:withPrefix:;
- (id)description;
- (id)descriptionWithIndent:;
- (void)diffObject:againstObject:;
- (void)diffObject:againstObject:withDescription:;
- (id)object1;
- (id)object2;
@end
