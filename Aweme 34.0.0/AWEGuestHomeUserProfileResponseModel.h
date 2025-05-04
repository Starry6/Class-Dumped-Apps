@interface AWEGuestHomeUserProfileResponseModel : AWEBaseApiModel
@property (nonatomic) AWEUserModel userModel;
- (void)setUserModel:;
- (void).cxx_destruct;
- (id)userModel;
+ (id)userModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
