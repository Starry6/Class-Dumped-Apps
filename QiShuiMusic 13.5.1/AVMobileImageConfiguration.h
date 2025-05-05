@interface AVMobileImageConfiguration : NSObject
@property (nonatomic) NSString string;
@property (nonatomic) UIFont font;
@property (nonatomic) BOOL prefersWesternLatinDigits;
- (id)string;
- (id)initWithString:font:;
- (id)imageName;
- (BOOL)prefersWesternLatinDigits;
- (unsigned long long)hash;
- (id)initWithImageName:font:prefersWesternLatinDigits:;
- (void).cxx_destruct;
- (id)font;
- (BOOL)isEqual:;
@end
