@interface LSGLBmfBrightenFilter : NSObject
@property (nonatomic) BOOL videoBrightenDisabled;
- (BOOL)setup:callback:;
- (id)getReport;
- (id)process:frameTime:outputBufferGetter:;
- (void)setVideoBrightenDisabled:;
- (BOOL)videoBrightenDisabled;
- (id)videoBrightenParams;
@end
