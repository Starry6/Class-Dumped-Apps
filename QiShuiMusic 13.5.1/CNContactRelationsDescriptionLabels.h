@interface CNContactRelationsDescriptionLabels : NSObject
@property (nonatomic) NSArray preferredLanguages;
@property (nonatomic) NSArray standardLabels;
@property (nonatomic) NSArray standardLocaleSpecificLabels;
@property (nonatomic) NSArray extendedLabels;
@property (nonatomic) NSArray extendedLocaleSpecificLabels;
@property (nonatomic) NSDictionary localizedStringsByLabelKey;
- (id)preferredLanguages;
- (void).cxx_destruct;
- (id)standardLabels;
- (id)extendedLabels;
- (id)initWithPreferredLanguages:standardLabels:standardLocaleSpecificLabels:extendedLabels:extendedLocaleSpecificLabels:localizedStringsByLabelKey:;
- (id)standardLocaleSpecificLabels;
- (id)extendedLocaleSpecificLabels;
- (id)localizedStringsByLabelKey;
@end
