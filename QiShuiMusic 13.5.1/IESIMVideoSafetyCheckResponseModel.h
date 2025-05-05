@interface IESIMVideoSafetyCheckResponseModel : IESIMBaseApiModel
@property (nonatomic) q safetyCode;
@property (nonatomic) NSString safetyMsg;
@property (nonatomic) NSString itemId;
- (long long)safetyCode;
- (id)safetyMsg;
- (void)setSafetyCode:;
- (void)setSafetyMsg:;
- (void).cxx_destruct;
- (id)itemId;
- (void)setItemId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
