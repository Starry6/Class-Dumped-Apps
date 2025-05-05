@interface INGetIntentParameterDefaultValueForwardingActionResponse : INIntentForwardingActionResponse
@property (nonatomic) NSData archivedDefaultValue;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)archivedDefaultValue;
- (id)initWithArchivedDefaultValue:error:;
+ (BOOL)supportsSecureCoding;
@end
