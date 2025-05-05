@interface ICFlowControlBasic : NSObject
@property (nonatomic) @? shouldBeCanceled;
@property (nonatomic) @? reportProgress;
- (void).cxx_destruct;
- (BOOL)ICShouldBeCanceled;
- (void)ICReportProgress:;
- (id)initWithProgress:;
- (id)initWithCancel:;
- (id)shouldBeCanceled;
- (void)setShouldBeCanceled:;
- (id)reportProgress;
- (void)setReportProgress:;
@end
