@interface INFVariantsDescriptor : NSObject
@property (nonatomic) Q plurality;
@property (nonatomic) Q gender;
@property (nonatomic) NSString dictionaryKey;
- (id)init;
- (unsigned long long)gender;
- (void)setGender:;
- (id)dictionaryKey;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)append:toString:;
- (id)initWithVariants:;
- (id)variantByRemovingOneAttribute;
- (unsigned long long)plurality;
- (void)setPlurality:;
+ (id)variant;
+ (id)variantWithVariants:;
@end
