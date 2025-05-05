@interface ToygerFaceState : ToygerBaseModel
@property (nonatomic) BOOL has_face;
@property (nonatomic) NSInteger brightness;
@property (nonatomic) NSInteger distance;
@property (nonatomic) BOOL face_in_center;
@property (nonatomic) BOOL is_moving;
@property (nonatomic) BOOL good_quality;
@property (nonatomic) BOOL good_pitch;
@property (nonatomic) BOOL good_yaw;
- (BOOL)face_in_center;
- (BOOL)good_pitch;
- (BOOL)good_quality;
- (BOOL)good_yaw;
- (BOOL)has_face;
- (BOOL)is_moving;
- (void)setFace_in_center:;
- (void)setGood_pitch:;
- (void)setGood_quality:;
- (void)setGood_yaw:;
- (void)setHas_face:;
- (void)setIs_moving:;
- (int)distance;
- (id)init;
- (void)setDistance:;
- (int)brightness;
- (void)setBrightness:;
@end
