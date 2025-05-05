@interface MKServerFormattedString : NSObject
@property (nonatomic) <GEOServerFormattedString> geoServerString;
@property (nonatomic) MKServerFormattedStringParameters parameters;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)parameters;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithGeoServerString:parameters:;
- (id)_parametersByScrubbingUnusedOverrideVariablesFromParameters:geoServerString:;
- (id)multiPartAttributedStringWithAttributes:;
- (id)_attributesByTokenForFormatStyles:;
- (BOOL)isEqualToServerFormattedString:;
- (id)geoServerString;
+ (BOOL)supportsSecureCoding;
+ (id)attributesForServerFormatStyle:;
@end
