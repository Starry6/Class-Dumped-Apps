@interface EARVoiceCommandInterpretation : NSObject
@property (nonatomic) NSString commandIdentifier;
@property (nonatomic) NSSet suiteIdentifiers;
@property (nonatomic) {_NSRange=QQ} range;
@property (nonatomic) NSIndexSet verbIndexes;
@property (nonatomic) NSArray arguments;
- (id)arguments;
- (unsigned long long)hash;
- (id)range;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithCommandIdentifier:suiteIdentifiers:verbIndexes:arguments:;
- (id)commandIdentifier;
- (id)suiteIdentifiers;
- (id)verbIndexes;
@end
