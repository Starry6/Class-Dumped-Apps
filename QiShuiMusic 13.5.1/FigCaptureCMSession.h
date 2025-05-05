@interface FigCaptureCMSession : NSObject
@property (nonatomic) ^{opaqueCMSession=} cmsession;
- (void)dealloc;
- (int)setProperty:value:;
- (id)copyProperty:error:;
- (id)initWithCMSession:;
- (id)cmsession;
@end
