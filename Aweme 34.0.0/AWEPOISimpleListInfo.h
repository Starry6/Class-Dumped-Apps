@interface AWEPOISimpleListInfo : MTLModel
@property (nonatomic) NSString listID;
@property (nonatomic) NSString listTitle;
@property (nonatomic) NSArray coverURLArray;
@property (nonatomic) NSString authorNickName;
@property (nonatomic) AWEURLModel authorAvatar;
@property (nonatomic) NSString schema;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)coverURLArray;
- (void)setCoverURLArray:;
- (id)authorNickName;
- (void)setAuthorNickName:;
- (id)authorAvatar;
- (void)setAuthorAvatar:;
- (id)schema;
- (void)setSchema:;
- (void).cxx_destruct;
- (id)listID;
- (void)setListID:;
- (id)listTitle;
- (void)setListTitle:;
+ (id)coverURLArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
