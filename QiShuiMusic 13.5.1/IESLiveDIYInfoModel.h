@interface IESLiveDIYInfoModel : NSObject
@property (nonatomic) q resourceType;
@property (nonatomic) NSString originInfo;
@property (nonatomic) NSString DIYInfo;
- (id)DIYInfo;
- (id)originInfo;
- (void)setDIYInfo:;
- (void)setOriginInfo:;
- (long long)resourceType;
- (void)setResourceType:;
- (void).cxx_destruct;
@end
