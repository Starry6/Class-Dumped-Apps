@interface CHSConfiguredWidgetContainerDescriptorsBox : NSObject
@property (nonatomic) NSArray descriptors;
- (id)descriptors;
- (id)initWithCoder:;
- (id)initWithDescriptors:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
+ (BOOL)supportsSecureCoding;
@end
