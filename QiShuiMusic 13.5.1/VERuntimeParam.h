@interface VERuntimeParam : NSObject
@property (nonatomic) BOOL GLES3Usable;
- (BOOL)GLES3Usable;
- (void)setGLES3Usable:;
- (id)init;
+ (id)sharedInstance;
@end
