@interface CNUICoreContactTypeAssessor : NSObject
@property (nonatomic) CNFuture familyInfoFuture;
- (id)init;
- (void).cxx_destruct;
- (id)initWithFamilyInfo:;
- (id)initWithFamilyInfoFuture:;
- (long long)estiamtedTypeOfContact:;
- (id)familyInfoFuture;
+ (id)keysToFetch;
@end
