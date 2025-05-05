@interface INRootCodableDescription : INCodableDescription
@property (nonatomic) NSArray referencedCodableDescriptions;
@property (nonatomic) NSDictionary _referencedCodableDescriptionsByClassName;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)referencedCodableDescriptions;
- (void)_setReferencedCodableDescriptions:;
- (id)_referencedCodableDescriptionsByClassName;
- (void)_establishReferencedCodableDescriptionsUsingTypes:;
- (void)_reestablishReferencedCodableDescriptionsUsingTypes:;
+ (BOOL)supportsSecureCoding;
@end
