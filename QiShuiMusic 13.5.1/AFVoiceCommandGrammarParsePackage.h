@interface AFVoiceCommandGrammarParsePackage : NSObject
@property (nonatomic) NSArray nBestParses;
@property (nonatomic) NSArray preITNNBestParses;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)nBestParses;
- (id)initWithNBestParses:preITNNBestParses:;
- (id)preITNNBestParses;
+ (BOOL)supportsSecureCoding;
@end
