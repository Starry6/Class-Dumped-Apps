@interface AspectsContainer : NSObject
@property (nonatomic) NSArray beforeAspects;
@property (nonatomic) NSArray insteadAspects;
@property (nonatomic) NSArray afterAspects;
- (void)addAspect:withOptions:;
- (id)afterAspects;
- (id)beforeAspects;
- (BOOL)hasAspects;
- (id)insteadAspects;
- (BOOL)removeAspect:;
- (void)setAfterAspects:;
- (void)setBeforeAspects:;
- (void)setInsteadAspects:;
- (void).cxx_destruct;
- (id)description;
@end
