@interface LayerRectDescription : NSObject
@property (nonatomic) Q lazy_render_flag;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} rectValue;
@property (nonatomic) NSString layer_name;
@property (nonatomic) NSInteger layer_id;
@property (nonatomic) NSInteger layer_zOrder;
@property (nonatomic) Q render_flag;
- (void)setRender_flag:;
- (id)getCurrMixedFrameCallback;
- (id)initWithLayerName:layer_id:;
- (int)layer_id;
- (id)layer_name;
- (int)layer_zOrder;
- (unsigned long long)lazy_render_flag;
- (unsigned long long)render_flag;
- (void)setCurrMixedFrameCallback:;
- (void)setLayer_id:;
- (void)setLayer_name:;
- (void)setLayer_zOrder:;
- (void)setLazy_render_flag:;
- (void)setRectValue:;
- (void).cxx_destruct;
- (id)rectValue;
@end
