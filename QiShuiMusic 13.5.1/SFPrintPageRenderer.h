@interface SFPrintPageRenderer : UIPrintPageRenderer
@property (nonatomic) NSString URLString;
@property (nonatomic) UIPrintFormatter contentFormatter;
@property (nonatomic) BOOL printFooter;
@property (nonatomic) <SFPrintPageRendererDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)URLString;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)printInteractionControllerParentViewController:;
- (void)setURLString:;
- (void)printInteractionControllerWillStartJob:;
- (void)printInteractionControllerDidFinishJob:;
- (void)setContentFormatter:;
- (void)drawFooterForPageAtIndex:inRect:;
- (id)contentFormatter;
- (BOOL)printFooter;
- (void)setPrintFooter:;
@end
