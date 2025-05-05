@interface CKAtomBatchEnumerationOptions : NSObject
@property (nonatomic) NSNumber atomType;
@property (nonatomic) NSData siteIdentifierModifier;
- (void).cxx_destruct;
- (id)atomType;
- (void)setAtomType:;
- (id)siteIdentifierModifier;
- (void)setSiteIdentifierModifier:;
+ (id)optionsWithAtomType:;
+ (id)optionsWithSiteIdentifierModifier:;
@end
