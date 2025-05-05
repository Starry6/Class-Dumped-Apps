@interface IESDPBDefinitionNodeProperty : NSObject
@property (nonatomic) q tag;
@property (nonatomic) q type;
@property (nonatomic) BOOL repeat;
@property (nonatomic) NSString fq;
@property (nonatomic) IESDPBDefinitionNodeProperty k;
@property (nonatomic) IESDPBDefinitionNodeProperty v;
- (id)fq;
- (void)setFq:;
- (void)setV:;
- (long long)tag;
- (void)setType:;
- (id)k;
- (void)setTag:;
- (long long)type;
- (void).cxx_destruct;
- (void)setK:;
- (id)v;
- (BOOL)repeat;
- (void)setRepeat:;
@end
