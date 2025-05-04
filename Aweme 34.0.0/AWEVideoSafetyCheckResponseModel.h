@interface AWEVideoSafetyCheckResponseModel : AWEBaseApiModel
@property (nonatomic) q safetyCode;
@property (nonatomic) NSString safetyMsg;
@property (nonatomic) NSString itemId;
- (long long)safetyCode;
- (void)setSafetyCode:;
- (id)safetyMsg;
- (void)setSafetyMsg:;
- (void).cxx_destruct;
- (id)itemId;
- (void)setItemId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
