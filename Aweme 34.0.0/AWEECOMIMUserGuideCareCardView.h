@interface AWEECOMIMUserGuideCareCardView : AWEECOMIMCardBaseView
- (id)imageComponentView;
- (id)textComponentView;
- (id)videoComponentView;
- (id)spaceView;
- (id)initWithFrame:;
- (void)updateData;
- (void)_customInit;
+ (double)heightWithWidth:model:;
@end
