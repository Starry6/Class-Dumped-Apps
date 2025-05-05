@interface AFDeleteSiriHistoryContext : NSObject
@property (nonatomic) NSString successTitle;
@property (nonatomic) NSString successBody;
@property (nonatomic) NSString successButtonText;
@property (nonatomic) NSString errorTitle;
@property (nonatomic) NSString errorBody;
@property (nonatomic) NSString errorButtonText;
- (id)init;
- (id)mutatedCopyWithMutator:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)_descriptionWithIndent:;
- (id)initWithBuilder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)errorTitle;
- (id)initWithSuccessTitle:successBody:successButtonText:errorTitle:errorBody:errorButtonText:;
- (id)successTitle;
- (id)successBody;
- (id)successButtonText;
- (id)errorBody;
- (id)errorButtonText;
+ (id)newWithBuilder:;
+ (BOOL)supportsSecureCoding;
@end
