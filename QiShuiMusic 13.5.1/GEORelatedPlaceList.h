@interface GEORelatedPlaceList : NSObject
@property (nonatomic) BOOL hasInitialData;
@property (nonatomic) NSArray placeTemplates;
@property (nonatomic) NSInteger type;
@property (nonatomic) Q numberOfInlineItems;
@property (nonatomic) NSArray mapIdentifiers;
- (int)type;
- (void).cxx_destruct;
- (id)initWithTemplates:type:hasInitialData:numberOfInlineItem:;
- (id)initWithRelatedPlace:;
- (id)initWithTemplatePlace:attributedMap:;
- (id)mapIdentifiers;
- (id)placeTemplates;
- (BOOL)hasInitialData;
- (unsigned long long)numberOfInlineItems;
@end
