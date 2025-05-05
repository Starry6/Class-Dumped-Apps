@interface INGetIntentParameterOptionsForwardingActionResponse : INIntentForwardingActionResponse
@property (nonatomic) NSData archivedObjectCollection;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithArchivedObjectCollection:error:;
- (id)archivedObjectCollection;
+ (BOOL)supportsSecureCoding;
@end
