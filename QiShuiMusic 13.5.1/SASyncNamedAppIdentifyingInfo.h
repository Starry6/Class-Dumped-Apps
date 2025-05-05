@interface SASyncNamedAppIdentifyingInfo : SASyncAppIdentifyingInfo
@property (nonatomic) NSString localizedBundleDisplayName;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)localizedBundleDisplayName;
- (void)setLocalizedBundleDisplayName:;
+ (id)namedAppIdentifyingInfo;
+ (id)namedAppIdentifyingInfoWithDictionary:context:;
@end
