@interface WFAddToMediaLibraryContextualAction : WFContextualAction
@property (nonatomic) WFContextualActionMediaItemDescriptor mediaItemDescriptor;
- (id)uniqueIdentifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithMediaItemDescriptor:;
- (id)mediaItemDescriptor;
+ (BOOL)supportsSecureCoding;
@end
