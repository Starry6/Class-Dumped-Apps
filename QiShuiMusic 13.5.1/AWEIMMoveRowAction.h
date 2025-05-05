@interface AWEIMMoveRowAction : AWEIMTableViewAction
@property (nonatomic) NSIndexPath fromIndexPath;
@property (nonatomic) NSIndexPath toIndexPath;
- (void)setToIndexPath:;
- (void)actionInvoke;
- (void)setFromIndexPath:;
- (long long)coefficient;
- (void).cxx_destruct;
- (id)fromIndexPath;
- (id)toIndexPath;
@end
