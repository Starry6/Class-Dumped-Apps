@interface IESLiveSaaSXLiveEmoticonModel : MTLModel
@property (nonatomic) NSString emoticonIcon;
@property (nonatomic) NSString emoticonTitle;
@property (nonatomic) NSString resourcePath;
@property (nonatomic) BOOL hide;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)emoticonIcon;
- (id)emoticonTitle;
- (void)setEmoticonIcon:;
- (void)setEmoticonTitle:;
- (void)setHide:;
- (BOOL)hide;
- (void).cxx_destruct;
- (id)resourcePath;
- (void)setResourcePath:;
+ (id)JSONKeyPathsByPropertyKey;
@end
