@interface SAResultReferenceWrapper : SAAceView
@property (nonatomic) SAResultObjectReference resultReference;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)resultReference;
- (void)setResultReference:;
+ (id)resultReferenceWrapper;
+ (id)resultReferenceWrapperWithDictionary:context:;
@end
