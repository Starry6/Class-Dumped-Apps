@interface AWEProfileExpandCardInfoModel : MTLModel
@property (nonatomic) AWEProfileCardEntriesInfoV3Model cardEntriesInfo;
@property (nonatomic) AWEProfileCardEntriesInfoV3Model serviceWidget;
@property (nonatomic) AWEProfileExtensionAreaCardModel showMoreCard;
@property (nonatomic) BOOL forbidEdit;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)serviceWidget;
- (id)cardEntriesInfo;
- (id)showMoreCard;
- (BOOL)forbidEdit;
- (void)setCardEntriesInfo:;
- (void)setServiceWidget:;
- (void)setShowMoreCard:;
- (void)setForbidEdit:;
- (void).cxx_destruct;
+ (id)cardEntriesInfoJSONTransformer;
+ (id)serviceWidgetJSONTransformer;
+ (id)showMoreCardJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
