@interface LNSystemProtocolParameter : NSObject
@property (nonatomic) q vocabularyModel;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithVocabularyModel:;
- (long long)vocabularyModel;
+ (BOOL)supportsSecureCoding;
@end
