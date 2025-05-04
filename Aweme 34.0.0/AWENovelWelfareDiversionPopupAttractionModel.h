@interface AWENovelWelfareDiversionPopupAttractionModel : MTLModel
@property (nonatomic) NSString rightContent;
@property (nonatomic) BOOL isNovelUser;
@property (nonatomic) BOOL canPopup;
@property (nonatomic) NSString appSchema;
@property (nonatomic) NSString zlink;
@property (nonatomic) AWENovelWelfareDiversionPopupModel popupModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)appSchema;
- (void)setAppSchema:;
- (id)rightContent;
- (void)setRightContent:;
- (void)setZlink:;
- (BOOL)canPopup;
- (void)setCanPopup:;
- (id)zlink;
- (BOOL)isNovelUser;
- (void)setIsNovelUser:;
- (void).cxx_destruct;
- (id)popupModel;
- (void)setPopupModel:;
+ (id)isNovelUserJSONTransformer;
+ (id)canPopupJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
