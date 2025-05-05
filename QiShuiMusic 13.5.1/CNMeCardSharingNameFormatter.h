@interface CNMeCardSharingNameFormatter : NSObject
@property (nonatomic) <CNMeCardSharingNameProvider> nameProvider;
@property (nonatomic) NSPersonNameComponents nameComponents;
@property (nonatomic) NSMutableDictionary cachedFormattedNames;
- (id)nameComponents;
- (void).cxx_destruct;
- (id)nameProvider;
- (id)initWithNameProvider:;
- (id)formattedNameWithFormat:;
- (id)cachedFormattedNames;
- (void)setCachedFormattedNames:;
+ (id)nameComponentsFromProvider:;
+ (id)formattedNameFromProvider:withFormat:;
+ (id)formattedNameFromComponents:forProvider:withFormat:;
@end
