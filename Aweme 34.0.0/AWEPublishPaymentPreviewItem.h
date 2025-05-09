@interface AWEPublishPaymentPreviewItem : NSObject
@property (nonatomic) Q itemType;
@property (nonatomic) Q paidType;
@property (nonatomic) NSString iconImageName;
@property (nonatomic) NSString itemName;
@property (nonatomic) NSString configContent;
@property (nonatomic) NSString priceConfigContent;
@property (nonatomic) NSString defaultContent;
@property (nonatomic) NSMutableDictionary extraInfo;
@property (nonatomic) BOOL isInEditMode;
@property (nonatomic) BOOL disableClick;
- (unsigned long long)paidType;
- (void)setPaidType:;
- (id)configContent;
- (void)setConfigContent:;
- (id)defaultContent;
- (void)setDefaultContent:;
- (void)setIsInEditMode:;
- (void)setPriceConfigContent:;
- (void)setDisableClick:;
- (id)priceConfigContent;
- (id)initWithIconImageName:itemName:configContent:defaultContent:;
- (BOOL)disableClick;
- (unsigned long long)itemType;
- (void)setItemType:;
- (void)setIconImageName:;
- (id)itemName;
- (void).cxx_destruct;
- (BOOL)isInEditMode;
- (id)iconImageName;
- (void)setItemName:;
- (id)extraInfo;
- (void)setExtraInfo:;
@end
