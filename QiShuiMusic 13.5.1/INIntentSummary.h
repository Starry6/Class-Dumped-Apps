@interface INIntentSummary : NSObject
@property (nonatomic) NSString intentIdentifier;
@property (nonatomic) NSString originatingBundleId;
@property (nonatomic) NSString languageCode;
@property (nonatomic) Q containedProperties;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
- (id)languageCode;
- (void)setSubtitle:;
- (void)setTitle:;
- (id)initWithIntentIdentifier:originatingBundleId:languageCode:;
- (id)originatingBundleId;
- (id)title;
- (void).cxx_destruct;
- (id)subtitle;
- (unsigned long long)containedProperties;
- (id)intentIdentifier;
@end
