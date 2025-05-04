@interface AWESearchUGCPageContext : NSObject
@property (nonatomic) BOOL fromUGCHashTagPage;
@property (nonatomic) NSString hashTagId;
@property (nonatomic) NSString hashTagName;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) NSString fromGroupId;
- (void)setEnterMethod:;
- (id)enterMethod;
- (void)setFromGroupId:;
- (id)fromGroupId;
- (id)hashTagName;
- (id)hashTagId;
- (void)setHashTagName:;
- (BOOL)fromUGCHashTagPage;
- (void)setHashTagId:;
- (void)setFromUGCHashTagPage:;
- (void).cxx_destruct;
@end
