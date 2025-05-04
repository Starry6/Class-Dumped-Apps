@interface AWELeftSideBarVideoCellDataModel : MTLModel
@property (nonatomic) NSString entryId;
@property (nonatomic) NSString mainTitle;
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSString schema;
@property (nonatomic) NSArray coversUrl;
@property (nonatomic) NSString authorId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)entryId;
- (void)setEntryId:;
- (id)coversUrl;
- (void)setCoversUrl:;
- (id)schema;
- (void)setSchema:;
- (void)setSubTitle:;
- (id)subTitle;
- (id)description;
- (void).cxx_destruct;
- (id)mainTitle;
- (void)setMainTitle:;
- (id)authorId;
- (void)setAuthorId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
