@interface IESIMSaaSAWEIMChineseDecomposer : NSObject
@property (nonatomic) NSString pinYin;
@property (nonatomic) NSString initials;
@property (nonatomic) NSArray components;
- (id)pinYin;
- (void)setPinYin:;
- (id)components;
- (void)setComponents:;
- (id)initWithString:;
- (void).cxx_destruct;
- (id)initials;
- (void)setInitials:;
@end
