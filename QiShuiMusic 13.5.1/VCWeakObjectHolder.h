@interface VCWeakObjectHolder : NSObject
@property (nonatomic) @ strong;
@property (nonatomic) ^^{OpaqueFigCFWeakReference} weak;
- (id)init;
- (void)dealloc;
- (id)weak;
- (id)initWithObject:;
- (id)strong;
+ (id)weakObjectHolderWithObject:;
@end
