@interface JDDepthAndImagePushResults : NSObject
@property (nonatomic) JDMatchedDepthAndImage match;
@property (nonatomic) NSArray droppedImages;
- (id)match;
- (void)setMatch:;
- (void).cxx_destruct;
- (id)droppedImages;
- (void)setDroppedImages:;
@end
