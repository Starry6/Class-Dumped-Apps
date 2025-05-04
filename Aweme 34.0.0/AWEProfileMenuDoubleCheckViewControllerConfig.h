@interface AWEProfileMenuDoubleCheckViewControllerConfig : NSObject
@property (nonatomic) NSArray imageArray;
@property (nonatomic) NSString titleLabelText;
@property (nonatomic) NSString contentLabelText;
@property (nonatomic) NSString confirmButtonText;
@property (nonatomic) @? resetSwitchBlock;
@property (nonatomic) @? confirmBlock;
- (id)confirmBlock;
- (void)setConfirmBlock:;
- (id)imageArray;
- (void)setImageArray:;
- (void)setConfirmButtonText:;
- (id)contentLabelText;
- (void)setContentLabelText:;
- (id)resetSwitchBlock;
- (void)setResetSwitchBlock:;
- (void).cxx_destruct;
- (id)confirmButtonText;
- (id)titleLabelText;
- (void)setTitleLabelText:;
@end
