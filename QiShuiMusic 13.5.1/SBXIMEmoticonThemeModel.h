@interface SBXIMEmoticonThemeModel : MTLModel
@property (nonatomic) NSString themeCoverIcon;
@property (nonatomic) NSArray emoticonArray;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)emoticonArray;
- (void)setEmoticonArray:;
- (void)setThemeCoverIcon:;
- (id)themeCoverIcon;
- (void).cxx_destruct;
+ (id)emoticonArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
