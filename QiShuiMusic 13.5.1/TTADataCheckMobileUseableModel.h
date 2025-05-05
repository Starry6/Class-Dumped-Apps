@interface TTADataCheckMobileUseableModel : TTADataRespModel
@property (nonatomic) BOOL isUnusable;
@property (nonatomic) BOOL isVerified;
@property (nonatomic) BOOL mnoSupport;
@property (nonatomic) NSString ticket;
- (BOOL)isUnusable;
- (BOOL)mnoSupport;
- (void)setIsUnusable:;
- (void)setMnoSupport:;
- (void).cxx_destruct;
- (id)ticket;
- (void)setTicket:;
- (BOOL)isVerified;
- (void)setIsVerified:;
+ (id)tta_modelCustomPropertyMapper;
@end
