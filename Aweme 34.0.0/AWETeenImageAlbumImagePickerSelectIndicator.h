@interface AWETeenImageAlbumImagePickerSelectIndicator : UIView
@property (nonatomic) UIColor borderColor;
@property (nonatomic) UIColor selectedBorderColor;
@property (nonatomic) UIColor fillColor;
@property (nonatomic) UIImage checkIcon;
@property (nonatomic) double selectedBorderWidth;
@property (nonatomic) BOOL selected;
- (void)setCheckIcon:;
- (id)selectedBorderColor;
- (void)setSelectedBorderWidth:;
- (double)selectedBorderWidth;
- (void)setSelectedBorderColor:;
- (void)setBorderColor:;
- (void)setFillColor:;
- (id)fillColor;
- (id)strokeColor;
- (id)borderColor;
- (void)drawRect:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (BOOL)selected;
- (void)setSelected:;
- (id)checkIcon;
@end
