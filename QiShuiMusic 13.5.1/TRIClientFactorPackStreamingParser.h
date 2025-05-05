@interface TRIClientFactorPackStreamingParser : NSObject
@property (nonatomic) BOOL hasFactorPackId;
@property (nonatomic) NSString factorPackId;
@property (nonatomic) BOOL hasSelectedNamespace;
@property (nonatomic) TRIClientSelectedNamespace selectedNamespace;
@property (nonatomic) NSData data;
- (id)initWithData:error:;
- (id)init;
- (BOOL)hasSelectedNamespace;
- (id)data;
- (id)factorPackId;
- (BOOL)hasFactorPackId;
- (void).cxx_destruct;
- (void)_parseWithHandleFactorLevel:;
- (unsigned int)_fieldTagForFieldName:;
- (void)enumerateFactorLevelsWithBlock:;
- (id)selectedNamespace;
@end
