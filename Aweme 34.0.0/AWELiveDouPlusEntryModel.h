@interface AWELiveDouPlusEntryModel : AWEBaseApiModel
@property (nonatomic) BOOL enableShowDouPlus;
@property (nonatomic) BOOL enableShowLocalPromotion;
@property (nonatomic) NSString douPlusURL;
- (BOOL)enableShowDouPlus;
- (BOOL)enableShowLocalPromotion;
- (id)douPlusURL;
- (void)setEnableShowLocalPromotion:;
- (id)initWithEnableShowDouPlus:andDouPlusURL:;
- (void)setEnableShowDouPlus:;
- (void)setDouPlusURL:;
- (void).cxx_destruct;
@end
