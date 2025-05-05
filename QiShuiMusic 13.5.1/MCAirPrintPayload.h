@interface MCAirPrintPayload : MCPayload
@property (nonatomic) NSMutableArray ippAddresses;
@property (nonatomic) Q airPrintCount;
- (void).cxx_destruct;
- (id)verboseDescription;
- (id)restrictions;
- (id)initWithDictionary:profile:outError:;
- (id)stubDictionary;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (unsigned long long)airPrintCount;
- (void)setAirPrintCount:;
- (id)ippAddresses;
- (void)setIppAddresses:;
+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
@end
