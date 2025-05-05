@interface SATTSSpeechSynthesisResource : AceObject
@property (nonatomic) NSString languageCode;
@property (nonatomic) NSString resourceVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (void)setLanguageCode:;
- (id)languageCode;
- (id)resourceVersion;
- (id)encodedClassName;
- (void)setResourceVersion:;
+ (id)speechSynthesisResource;
+ (id)speechSynthesisResourceWithDictionary:context:;
@end
