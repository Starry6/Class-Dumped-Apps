@interface VCPRequest : NSObject
@property (nonatomic) BOOL useCPUOnly;
@property (nonatomic) I revision;
- (id)init;
- (id)initWithOptions:;
- (unsigned int)revision;
- (BOOL)updateWithOptions:error:;
- (id)preferredInputSizeWithOptions:error:;
- (unsigned int)preferredPixelFormat;
- (BOOL)cleanupWithOptions:error:;
- (BOOL)useCPUOnly;
@end
