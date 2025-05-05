@interface CHSWidgetDescriptorsBox : NSObject
@property (nonatomic) NSSet descriptors;
@property (nonatomic) NSDictionary descriptorsByExtensionIdentifier;
- (id)descriptors;
- (id)descriptorsByExtensionIdentifier;
- (void)_performValidation;
- (id)initWithCoder:;
- (id)initWithDescriptors:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
+ (BOOL)supportsSecureCoding;
@end
