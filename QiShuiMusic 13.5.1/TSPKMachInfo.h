@interface TSPKMachInfo : NSObject
@property (nonatomic) ^{mach_header_64=IiiIIIII} machHeader;
@property (nonatomic) q machSlide;
@property (nonatomic) NSString machName;
@property (nonatomic) q textVMStart;
@property (nonatomic) q textVMEnd;
- (void)setTextVMStart:;
- (void)fixSortedRules:;
- (id)initWithHeader:slide:name:range:;
- (id)machHeader;
- (long long)machSlide;
- (void)setMachHeader:;
- (void)setMachSlide:;
- (void)setTextVMEnd:;
- (long long)textVMEnd;
- (long long)textVMStart;
- (id)machName;
- (void).cxx_destruct;
- (void)setMachName:;
@end
