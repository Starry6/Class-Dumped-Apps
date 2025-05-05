@interface SCNMTLLibrary : NSObject
@property (nonatomic) <MTLLibrary> library;
- (void)_load;
- (void)dealloc;
- (id)library;
- (id)initWithPath:manager:;
@end
