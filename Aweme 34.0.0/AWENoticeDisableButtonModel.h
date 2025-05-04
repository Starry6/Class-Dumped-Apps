@interface AWENoticeDisableButtonModel : AWEBaseApiModel
@property (nonatomic) NSString text;
@property (nonatomic) NSString value;
@property (nonatomic) NSString type;
- (id)value;
- (void)setText:;
- (id)text;
- (void)setValue:;
- (id)type;
- (void)setType:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
