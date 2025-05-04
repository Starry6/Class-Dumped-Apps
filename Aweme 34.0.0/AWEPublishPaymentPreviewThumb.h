@interface AWEPublishPaymentPreviewThumb : NSObject
@property (nonatomic) double value;
@property (nonatomic) Q type;
@property (nonatomic) UIImage thumbImage;
@property (nonatomic) @? valChangeBlock;
- (void)setThumbImage:;
- (id)thumbImage;
- (void)setValChangeBlock:;
- (id)valChangeBlock;
- (double)value;
- (void)setValue:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)initWithType:;
@end
