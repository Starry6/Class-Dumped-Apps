@interface AWEActivityStartupPopupModel : MTLModel
@property (nonatomic) NSString popupCoverURL;
@property (nonatomic) NSString title;
@property (nonatomic) NSString desc;
@property (nonatomic) NSString confirmButtonText;
@property (nonatomic) NSString schema;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setConfirmButtonText:;
- (id)popupCoverURL;
- (void)setPopupCoverURL:;
- (id)schema;
- (void)setSchema:;
- (void)setDesc:;
- (id)desc;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)confirmButtonText;
+ (id)JSONKeyPathsByPropertyKey;
@end
