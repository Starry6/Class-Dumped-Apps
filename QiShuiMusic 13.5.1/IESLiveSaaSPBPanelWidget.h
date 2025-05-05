@interface IESLiveSaaSPBPanelWidget : GPBMessage
@property (nonatomic) NSInteger id_p;
@property (nonatomic) NSString name;
@property (nonatomic) NSString displayText;
@property (nonatomic) NSInteger type;
@property (nonatomic) NSString imageURL;
@property (nonatomic) NSString imageFallbackURL;
@property (nonatomic) NSInteger isGray;
@property (nonatomic) NSString toast;
@property (nonatomic) NSInteger showType;
@property (nonatomic) NSString schemeURL;
@property (nonatomic) NSString payload;
+ (id)descriptor;
@end
