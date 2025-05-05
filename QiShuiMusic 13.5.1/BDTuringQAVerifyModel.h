@interface BDTuringQAVerifyModel : BDTuringVerifyModel
@property (nonatomic) BOOL pop;
- (void)setPop:;
- (void)appendKVToQueryParameters:;
- (void)configVerifyView:;
- (id)createVerifyView;
- (BOOL)supportLandscape;
- (BOOL)pop;
- (id)init;
@end
