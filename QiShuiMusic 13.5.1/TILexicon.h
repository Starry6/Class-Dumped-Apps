@interface TILexicon : NSObject
@property (nonatomic) NSArray entries;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)entries;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (void)requestLexiconFromBundlePath:completionHandler:;
+ (id)lexiconWithEntries:;
@end
