@interface IESECSliceXExprCoreIdentifierCommand : IESECSliceXExprCoreCommand
@property (nonatomic) NSString identifier;
- (BOOL)execute:withEnv:error:;
- (id)identifier;
- (void).cxx_destruct;
- (id)initWithIdentifier:;
@end
