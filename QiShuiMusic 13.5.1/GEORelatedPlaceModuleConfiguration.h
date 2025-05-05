@interface GEORelatedPlaceModuleConfiguration : NSObject
@property (nonatomic) NSString sectionTitle;
@property (nonatomic) Q numberOfRows;
@property (nonatomic) NSInteger componentIdentifier;
@property (nonatomic) NSInteger layoutVariant;
@property (nonatomic) BOOL vertical;
- (BOOL)isVertical;
- (void).cxx_destruct;
- (unsigned long long)numberOfRows;
- (id)description;
- (id)sectionTitle;
- (id)initWithPlaceTemplateModuleConfiguration:;
- (int)componentIdentifier;
- (int)layoutVariant;
@end
