@interface PFUbiquityToManyConflictDiff : NSObject
- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)isEqual:;
- (id)initForRelationshipAtKey:;
@end
