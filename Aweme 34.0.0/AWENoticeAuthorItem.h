@interface AWENoticeAuthorItem : NSObject
@property (nonatomic) AWEUserModel user;
@property (nonatomic) NSString relationText;
@property (nonatomic) q labelType;
@property (nonatomic) BOOL isVcdAuth;
@property (nonatomic) NSArray fansTagArray;
- (id)relationText;
- (id)fansTagArray;
- (void)setFansTagArray:;
- (void)setRelationText:;
- (void)setIsVcdAuth:;
- (void)_processFansTagArray:model:;
- (BOOL)isVcdAuth;
- (id)user;
- (void)setUser:;
- (long long)labelType;
- (id)initWithModel:;
- (void)setLabelType:;
- (void).cxx_destruct;
@end
