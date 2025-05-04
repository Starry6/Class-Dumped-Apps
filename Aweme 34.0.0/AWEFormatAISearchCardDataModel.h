@interface AWEFormatAISearchCardDataModel : MTLModel
@property (nonatomic) NSArray avatarInfo;
@property (nonatomic) NSString title;
@property (nonatomic) NSString abstract;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)avatarInfo;
- (void)setAvatarInfo:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)abstract;
- (void)setAbstract:;
+ (BOOL)supportsSecureCoding;
+ (id)JSONTransformerForKey:;
+ (id)JSONKeyPathsByPropertyKey;
@end
