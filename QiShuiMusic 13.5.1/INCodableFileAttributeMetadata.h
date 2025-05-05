@interface INCodableFileAttributeMetadata : INCodableAttributeMetadata
@property (nonatomic) NSString type;
@property (nonatomic) NSArray customUTIs;
@property (nonatomic) NSArray UTIs;
- (void)updateWithDictionary:;
- (id)dictionaryRepresentationWithLocalizer:;
- (id)__INCodableDescriptionTypeKey;
- (id)__INTypeCodableDescriptionTypeKey;
- (id)__INIntentResponseCodableDescriptionTypeKey;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)type;
- (void).cxx_destruct;
- (id)__INCodableDescriptionCustomUTIsKey;
- (id)__INIntentResponseCodableDescriptionCustomUTIsKey;
- (id)__INTypeCodableDescriptionCustomUTIsKey;
- (id)UTIs;
- (id)customUTIs;
+ (BOOL)supportsSecureCoding;
@end
