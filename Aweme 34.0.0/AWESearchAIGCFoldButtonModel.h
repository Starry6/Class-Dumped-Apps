@interface AWESearchAIGCFoldButtonModel : MTLModel
@property (nonatomic) NSString searchId;
@property (nonatomic) NSArray foldIdList;
@property (nonatomic) NSString title;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)searchId;
- (void)setSearchId:;
- (id)foldIdList;
- (void)setFoldIdList:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (BOOL)supportsSecureCoding;
+ (id)JSONKeyPathsByPropertyKey;
@end
