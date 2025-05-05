@interface MRColorComponents : NSObject
@property (nonatomic) _MRColorProtobuf protobuf;
@property (nonatomic) float red;
@property (nonatomic) float green;
@property (nonatomic) float blue;
@property (nonatomic) float alpha;
- (float)red;
- (id)initWithProtobuf:;
- (float)blue;
- (void)setRed:;
- (id)protobuf;
- (void)setAlpha:;
- (void)setGreen:;
- (void)setBlue:;
- (float)green;
- (float)alpha;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
