@interface WBSPerSitePreference : NSObject
@property (nonatomic) NSString identifier;
- (id)identifier;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)initWithIdentifier:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)localizedStringForBinaryPreferenceValue:;
@end
