@interface IESECWindowSplitBlockGroup : NSObject
@property (nonatomic) @? halfViewWillOpen;
@property (nonatomic) @? halfViewWillClose;
@property (nonatomic) @? halfViewCloseHandler;
- (id)halfViewCloseHandler;
- (id)halfViewWillClose;
- (id)halfViewWillOpen;
- (void)setHalfViewCloseHandler:;
- (void)setHalfViewWillClose:;
- (void)setHalfViewWillOpen:;
- (void).cxx_destruct;
@end
