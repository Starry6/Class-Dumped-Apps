@interface MLPData : NSObject
@property (nonatomic) I label;
@property (nonatomic) NSData oneHot;
@property (nonatomic) NSData pixels;
@property (nonatomic) NSData classDist;
- (void)setLabel:;
- (unsigned int)label;
- (void).cxx_destruct;
- (id)oneHot;
- (void)setOneHot:;
- (id)pixels;
- (void)setPixels:;
- (id)classDist;
- (void)setClassDist:;
@end
