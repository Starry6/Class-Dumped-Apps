@interface CNContactRelationLocalizationProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)preferredLanguages;
+ (id)supplementalLabelURLPairsForLanguages:;
@end
