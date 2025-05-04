@interface AWECodeGenV1UserRemarkTipsResponse : AWEBaseResponseModel
@property (nonatomic) NSString mkey;
@property (nonatomic) NSString greeting;
@property (nonatomic) NSString mateApplyMsg;
- (id)mkey;
- (id)greeting;
- (void)setGreeting:;
- (id)mateApplyMsg;
- (void)setMateApplyMsg:;
- (void).cxx_destruct;
- (void)setMkey:;
+ (id)JSONKeyPathsByPropertyKey;
@end
