@interface LiveCoreLayerInfo : NSObject
@property (nonatomic) NSNumber layerID;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} layerRect;
@property (nonatomic) q zOrder;
- (id)initWithID:rect:withZOrder:;
- (id)layerRect;
- (void)setLayerRect:;
- (void)updateLayerRect:;
- (void).cxx_destruct;
- (void)setLayerID:;
- (long long)zOrder;
- (id)layerID;
- (void)setZOrder:;
@end
