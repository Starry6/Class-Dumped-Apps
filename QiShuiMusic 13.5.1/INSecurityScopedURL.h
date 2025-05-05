@interface INSecurityScopedURL : NSObject
@property (nonatomic) NSURL url;
- (id)url;
- (id)initWithURL:;
- (void).cxx_destruct;
- (BOOL)startAccessingSecurityScopedResource;
- (void)stopAccessingSecurityScopedResource;
@end
