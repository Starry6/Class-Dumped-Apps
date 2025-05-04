@interface AWEAncestorInfoModel : MTLModel
@property (nonatomic) NSInteger productId;
@property (nonatomic) q gid;
@property (nonatomic) q uid;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setUid:;
- (long long)gid;
- (void)setGid:;
- (int)productId;
- (long long)uid;
- (void)setProductId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
