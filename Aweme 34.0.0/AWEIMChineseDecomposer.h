@interface AWEIMChineseDecomposer : NSObject
@property (nonatomic) NSString pinYin;
@property (nonatomic) NSString initials;
@property (nonatomic) NSArray components;
- (id)pinYin;
- (void)setPinYin:;
- (void)setComponents:;
- (void).cxx_destruct;
- (id)initWithString:;
- (id)components;
- (id)initials;
- (void)setInitials:;
@end
