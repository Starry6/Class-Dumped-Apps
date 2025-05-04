@interface AWECodeGenBaseNoticeSubscribeModel : AWEBaseDataModel
@property (nonatomic) NSString name;
@property (nonatomic) NSInteger type;
@property (nonatomic) NSInteger unsubscribe;
- (void)setUnsubscribe:;
- (int)type;
- (void)setType:;
- (void).cxx_destruct;
- (int)unsubscribe;
- (void)setName:;
- (id)name;
+ (id)JSONKeyPathsByPropertyKey;
@end
