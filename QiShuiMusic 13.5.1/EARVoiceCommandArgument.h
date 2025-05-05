@interface EARVoiceCommandArgument : NSObject
@property (nonatomic) c presence;
@property (nonatomic) NSIndexSet indexes;
@property (nonatomic) NSIndexSet adpositionIndexes;
- (unsigned long long)hash;
- (id)indexes;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithPresence:indexes:adpositionIndexes:;
- (char)presence;
- (id)adpositionIndexes;
@end
