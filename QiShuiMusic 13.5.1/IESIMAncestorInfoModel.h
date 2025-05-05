@interface IESIMAncestorInfoModel : MTLModel
@property (nonatomic) NSInteger productId;
@property (nonatomic) q gid;
@property (nonatomic) q uid;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)gid;
- (long long)uid;
- (int)productId;
- (void)setUid:;
- (void)setGid:;
- (void)setProductId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
