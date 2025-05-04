@interface AWEDescriptionProcessMark : NSObject
@property (nonatomic) Q type;
@property (nonatomic) {_NSRange=QQ} range;
@property (nonatomic) NSString value;
- (id)range;
- (void)setRange:;
- (id)value;
- (void)setValue:;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
+ (id)initWithType:withRange:withValue:;
@end
