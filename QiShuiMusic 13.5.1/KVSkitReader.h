@interface KVSkitReader : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void)prewarm;
- (id)indexLocale;
- (BOOL)deactivate;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithSkitDirectoryURL:;
- (id)_activationBlock;
- (id)_deactivationBlock;
- (id)matchSpans:error:;
- (id)initWithSkitDirectoryURL:lifespan:;
@end
