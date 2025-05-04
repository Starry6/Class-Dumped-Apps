@interface AWEProfileEditResponseToastBackInfo : AWEBaseApiModel
@property (nonatomic) Q commitStatus;
@property (nonatomic) NSString toastMessage;
@property (nonatomic) BOOL back;
- (id)toastMessage;
- (void)setToastMessage:;
- (void)setBack:;
- (unsigned long long)commitStatus;
- (void)setCommitStatus:;
- (id)initWithCommitStatus:;
- (void).cxx_destruct;
- (BOOL)back;
+ (id)JSONKeyPathsByPropertyKey;
@end
