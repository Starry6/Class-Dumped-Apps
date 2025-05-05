@interface IESPrefetchAPIParamsNode : NSObject
@property (nonatomic) NSString paramName;
@property (nonatomic) @ valueFrom;
@property (nonatomic) Q type;
@property (nonatomic) Q dataType;
- (id)paramName;
- (void)setParamName:;
- (void)setValueFrom:;
- (id)valueFrom;
- (void)setDataType:;
- (id)jsonRepresentation;
- (void)setType:;
- (unsigned long long)dataType;
- (unsigned long long)type;
- (void).cxx_destruct;
@end
