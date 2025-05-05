@interface WXOpenBusinessViewReq : BaseReq
@property (nonatomic) NSString businessType;
@property (nonatomic) NSString query;
@property (nonatomic) NSString extInfo;
@property (nonatomic) NSData extData;
- (id)extInfo;
- (id)extData;
- (void)setBusinessType:;
- (void)setExtData:;
- (void)setExtInfo:;
- (void)setQuery:;
- (id)query;
- (void).cxx_destruct;
- (id)businessType;
+ (id)object;
@end
