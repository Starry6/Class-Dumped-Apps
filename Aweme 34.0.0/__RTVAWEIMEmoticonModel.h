@interface __RTVAWEIMEmoticonModel : NSObject
@property (nonatomic) NSNumber version;
@property (nonatomic) NSNumber identifier;
@property (nonatomic) NSNumber width;
@property (nonatomic) NSNumber height;
@property (nonatomic) NSString display_name;
@property (nonatomic) NSString animate_url;
@property (nonatomic) NSString static_url;
@property (nonatomic) NSString static_type;
@property (nonatomic) NSString animate_type;
@property (nonatomic) NSDictionary display_name_lang;
@property (nonatomic) NSString animate_uri;
@property (nonatomic) NSString static_uri;
@property (nonatomic) q resourceType;
@property (nonatomic) q originThemeStyle;
@property (nonatomic) NSString originUniqueId;
@property (nonatomic) NSNumber originPackageID;
@property (nonatomic) NSString sourceDescription;
@property (nonatomic) NSString sourceSchema;
@property (nonatomic) Q stickerType;
@property (nonatomic) NSString emoticonIcon;
@property (nonatomic) NSString emoticonTitle;
@property (nonatomic) BOOL hide;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setHide:;
- (id)emoticonTitle;
- (id)emoticonIcon;
- (void)setStickerType:;
- (id)originPackageID;
- (id)static_url;
- (id)display_name;
- (void)setDisplay_name:;
- (id)sourceSchema;
- (void)setSourceSchema:;
- (void)setEmoticonIcon:;
- (void)setEmoticonTitle:;
- (long long)originThemeStyle;
- (id)animate_type;
- (id)animate_url;
- (id)animate_uri;
- (id)static_uri;
- (void)setOriginPackageID:;
- (void)setOriginUniqueId:;
- (void)setOriginThemeStyle:;
- (id)initWithRTVEmoticon:;
- (id)static_type;
- (void)setAnimate_url:;
- (void)setStatic_url:;
- (void)setStatic_type:;
- (void)setAnimate_type:;
- (id)display_name_lang;
- (void)setDisplay_name_lang:;
- (void)setAnimate_uri:;
- (void)setStatic_uri:;
- (id)originUniqueId;
- (long long)resourceType;
- (void)setResourceType:;
- (BOOL)hide;
- (void)setHeight:;
- (void)setIdentifier:;
- (id)sourceDescription;
- (void)setWidth:;
- (id)version;
- (id)identifier;
- (id)width;
- (void)setVersion:;
- (void)setSourceDescription:;
- (void).cxx_destruct;
- (id)height;
- (unsigned long long)stickerType;
@end
