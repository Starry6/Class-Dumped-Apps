@interface INImageNoteContent : INNoteContent
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) INImage image;
- (id)initWithImage:;
- (void)_injectProxiesForImages:completion:;
- (id)_intents_readableTitleWithLocalizer:metadata:;
- (id)_dictionaryRepresentation;
- (void)_intents_updateContainerWithCache:;
- (id)initWithCoder:;
- (void)_setImage:;
- (unsigned long long)hash;
- (id)_initWithImage:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)_intents_cacheableObjects;
- (BOOL)isEqual:;
- (id)image;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
