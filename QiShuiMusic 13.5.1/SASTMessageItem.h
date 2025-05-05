@interface SASTMessageItem : AceObject
@property (nonatomic) NSURL audioMessageURL;
@property (nonatomic) NSString bundleId;
@property (nonatomic) SAUIDecoratedText content;
@property (nonatomic) SAUIDecoratedText recipient;
@property (nonatomic) NSString serviceType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)content;
- (void)setContent:;
- (id)groupIdentifier;
- (id)bundleId;
- (id)serviceType;
- (void)setServiceType:;
- (id)encodedClassName;
- (void)setBundleId:;
- (void)setRecipient:;
- (id)recipient;
- (id)audioMessageURL;
- (void)setAudioMessageURL:;
+ (id)messageItem;
+ (id)messageItemWithDictionary:context:;
@end
