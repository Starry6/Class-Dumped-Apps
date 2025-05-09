@interface AWEIMMessageShowAnimationModel : MTLModel
@property (nonatomic) NSString resource_id;
@property (nonatomic) NSArray resource_url;
@property (nonatomic) q particle_num;
@property (nonatomic) NSArray particle_size;
@property (nonatomic) q particle_pro_delay;
@property (nonatomic) NSArray particle_fall_x;
@property (nonatomic) NSArray particle_fall_y;
@property (nonatomic) NSArray particle_fall_curve;
@property (nonatomic) NSArray particle_fall_speed;
@property (nonatomic) NSArray particle_alpha;
@property (nonatomic) float particle_alpha_start;
@property (nonatomic) NSInteger particle_size_min;
@property (nonatomic) NSInteger particle_size_max;
@property (nonatomic) NSInteger particle_fall_x_left;
@property (nonatomic) NSInteger particle_fall_x_right;
@property (nonatomic) float particle_fall_y_top;
@property (nonatomic) float particle_fall_y_bottom;
@property (nonatomic) float particle_fall_curve_va;
@property (nonatomic) float particle_fall_curve_vb;
@property (nonatomic) float particle_fall_curve_vc;
@property (nonatomic) float particle_fall_curve_vd;
@property (nonatomic) NSInteger particle_fall_speed_min;
@property (nonatomic) NSInteger particle_fall_speed_max;
@property (nonatomic) float particle_opacity_begin;
@property (nonatomic) float particle_opacity_end;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)resource_id;
- (long long)particle_pro_delay;
- (id)resource_url;
- (long long)particle_num;
- (int)particle_size_min;
- (int)particle_size_max;
- (int)particle_fall_x_left;
- (int)particle_fall_x_right;
- (float)particle_fall_y_top;
- (float)particle_fall_y_bottom;
- (int)particle_fall_speed_min;
- (int)particle_fall_speed_max;
- (float)particle_opacity_begin;
- (float)particle_opacity_end;
- (float)particle_alpha_start;
- (float)particle_fall_curve_va;
- (float)particle_fall_curve_vb;
- (float)particle_fall_curve_vc;
- (float)particle_fall_curve_vd;
- (void)setResource_url:;
- (id)particle_size;
- (id)particle_fall_x;
- (id)particle_fall_y;
- (id)particle_fall_curve;
- (id)particle_fall_speed;
- (id)particle_alpha;
- (void)setResource_id:;
- (void)setParticle_num:;
- (void)setParticle_size:;
- (void)setParticle_pro_delay:;
- (void)setParticle_fall_x:;
- (void)setParticle_fall_y:;
- (void)setParticle_fall_curve:;
- (void)setParticle_fall_speed:;
- (void)setParticle_alpha:;
- (void)setParticle_alpha_start:;
- (void).cxx_destruct;
+ (id)usersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
