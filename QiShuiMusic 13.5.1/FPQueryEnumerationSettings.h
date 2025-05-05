@interface FPQueryEnumerationSettings : FPEnumerationSettings
@property (nonatomic) NSArray allowedProviders;
@property (nonatomic) NSNumber desiredNumberOfItems;
@property (nonatomic) NSArray excludedFileTypes;
@property (nonatomic) NSArray allowedFileTypes;
@property (nonatomic) NSString tagIdentifier;
- (id)init;
- (void)setAllowedProviders:;
- (void)setAllowedFileTypes:;
- (void)setExcludedFileTypes:;
- (id)desiredNumberOfItems;
- (id)excludedFileTypes;
- (id)allowedProviders;
- (void)setTagIdentifier:;
- (id)allowedFileTypes;
- (void).cxx_destruct;
- (void)setDesiredNumberOfItems:;
- (id)tagIdentifier;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
