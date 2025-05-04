@interface AWEUserVerifyModel : NSObject
@property (nonatomic) <AWEUserVerifyInfoModelProtocol> accountCertInfo;
@property (nonatomic) BOOL needIconBg;
@property (nonatomic) UIColor iconBgColor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)accountCertInfo;
- (void)setAccountCertInfo:;
- (void)setNeedIconBg:;
- (void)setIconBgColor:;
- (BOOL)needIconBg;
- (id)iconBgColor;
- (id)initWithBlock:;
- (void).cxx_destruct;
+ (id)instanceWithBlock:;
@end
