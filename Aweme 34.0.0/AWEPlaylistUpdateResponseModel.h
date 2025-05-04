@interface AWEPlaylistUpdateResponseModel : AWEBaseApiModel
@property (nonatomic) AWEPlaylistStatusModel statusInfo;
- (id)statusInfo;
- (void)setStatusInfo:;
- (void).cxx_destruct;
+ (id)statusInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
