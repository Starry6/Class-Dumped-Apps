@interface TTAGetThridPartUserInfoModel : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString avatarUrl;
@property (nonatomic) NSDictionary extraInfo;
- (id)avatarUrl;
- (void)setAvatarUrl:;
- (void)setExtraInfo:;
- (void)setName:;
- (void).cxx_destruct;
- (id)name;
- (id)extraInfo;
+ (id)tta_modelCustomPropertyMapper;
@end
