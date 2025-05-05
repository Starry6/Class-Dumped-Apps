@interface IESECCommentPostOrderInfoModel : MTLModel
@property (nonatomic) BOOL canPostToAweme;
@property (nonatomic) NSString productName;
@property (nonatomic) BOOL emptyContent;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canPostToAweme;
- (void)setCanPostToAweme:;
- (void)setEmptyContent:;
- (void)setProductName:;
- (id)productName;
- (id)init;
- (void).cxx_destruct;
- (BOOL)emptyContent;
+ (id)JSONKeyPathsByPropertyKey;
@end
