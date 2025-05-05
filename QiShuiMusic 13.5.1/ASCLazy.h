@interface ASCLazy : NSObject
@property (nonatomic) @ objectIfLoaded;
@property (nonatomic) @? factory;
@property (nonatomic) {os_unfair_lock_s=I} loadingGuard;
@property (nonatomic) @ object;
- (id)factory;
- (void).cxx_destruct;
- (id)object;
- (id)description;
- (id)initWithFactory:;
- (id)objectIfLoaded;
- (void)setObjectIfLoaded:;
- (id)loadingGuard;
@end
