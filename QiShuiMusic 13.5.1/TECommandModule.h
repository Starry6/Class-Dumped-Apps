@interface TECommandModule : NSObject
@property (nonatomic) NSString layerID;
@property (nonatomic) NSString commandTag;
@property (nonatomic) q index;
- (id)commandTag;
- (void)setCommandTag:;
- (long long)index;
- (void)setIndex:;
- (void).cxx_destruct;
- (void)setLayerID:;
- (id)layerID;
@end
