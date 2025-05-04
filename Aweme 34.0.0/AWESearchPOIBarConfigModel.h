@interface AWESearchPOIBarConfigModel : AWEBaseApiModel
@property (nonatomic) NSString strDataID;
@property (nonatomic) NSString strBarRightButtonText;
@property (nonatomic) NSString strBarLeftIconURL;
@property (nonatomic) NSString strBarLeftText;
- (void)setStrDataID:;
- (void)setStrBarRightButtonText:;
- (void)setStrBarLeftIconURL:;
- (void)setStrBarLeftText:;
- (id)strBarLeftText;
- (id)strDataID;
- (id)strBarLeftIconURL;
- (id)strBarRightButtonText;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
