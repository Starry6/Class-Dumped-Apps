@interface EMFEmojiStringGenderVariantFactory : NSObject
@property (nonatomic) NSInteger gender;
@property (nonatomic) NSString sourceString;
- (int)gender;
- (void).cxx_destruct;
- (id)sourceString;
- (id)initWithSourceString:gender:;
- (id)stringForGenderVariant:;
- (void)setSourceString:;
@end
