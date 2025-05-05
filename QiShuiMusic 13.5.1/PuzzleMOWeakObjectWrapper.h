@interface PuzzleMOWeakObjectWrapper : NSObject
@property (nonatomic) @ weakObject;
- (id)weakObject;
- (void).cxx_destruct;
- (void)setWeakObject:;
+ (id)wrapWithObject:;
@end
