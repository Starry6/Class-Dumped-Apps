@interface AWEIMSkylightFriendWholeDotModel : NSObject
@property (nonatomic) AWEIMSkylightDotInfoModel onlineConfig;
@property (nonatomic) AWEIMSkylightDotInfoModel birthdayConfig;
- (id)onlineConfig;
- (id)birthdayConfig;
- (void)setOnlineConfig:;
- (void)setBirthdayConfig:;
- (id)getContentDictionary;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithDictionary:;
- (id)initWithCoder:;
@end
