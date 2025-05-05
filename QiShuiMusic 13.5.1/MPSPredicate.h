@interface MPSPredicate : NSObject
@property (nonatomic) <MTLBuffer> predicateBuffer;
@property (nonatomic) Q predicateOffset;
- (id)debugQuickLookObject;
- (id)init;
- (void)dealloc;
- (id)debugDescription;
- (id)initWithDevice:;
- (id)initWithBuffer:offset:;
- (id)predicateBuffer;
- (unsigned long long)predicateOffset;
+ (id)predicateWithBuffer:offset:;
@end
