@interface AFOutputVoiceColorDescriptor : NSObject
@property (nonatomic) NSString hexColor;
@property (nonatomic) NSString colorName;
@property (nonatomic) float alpha;
@property (nonatomic) NSString localizedOutputVoiceColor;
@property (nonatomic) NSString localizedOutputVoice;
- (id)mutatedCopyWithMutator:;
- (id)colorName;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)_descriptionWithIndent:;
- (void)encodeWithCoder:;
- (float)alpha;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithHexColor:colorName:alpha:localizedOutputVoiceColor:localizedOutputVoice:;
- (id)hexColor;
- (id)localizedOutputVoiceColor;
- (id)localizedOutputVoice;
+ (id)newWithBuilder:;
+ (BOOL)supportsSecureCoding;
@end
