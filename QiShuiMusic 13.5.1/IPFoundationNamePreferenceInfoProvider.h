@interface IPFoundationNamePreferenceInfoProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)domain;
+ (id)nativeKeyNameToCanonicalKeyName;
+ (id)canonicalNameToNativeKeyName;
+ (id)valueIdentifierToValueMapFromCanonicalKey:;
+ (id)valueToValueIdentifierMapFromCanonicalKey:;
+ (id)canonicalKeyToValueIdentifierToNumericValueMap;
@end
