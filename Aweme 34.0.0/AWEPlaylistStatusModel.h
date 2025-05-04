@interface AWEPlaylistStatusModel : AWEBaseApiModel
@property (nonatomic) Q status;
@property (nonatomic) NSString err_reason;
- (id)err_reason;
- (id)initWithMiniLunaStatus:;
- (void)setErr_reason:;
- (void)setStatus:;
- (void).cxx_destruct;
- (unsigned long long)status;
+ (id)JSONKeyPathsByPropertyKey;
@end
