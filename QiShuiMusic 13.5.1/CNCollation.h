@interface CNCollation : NSObject
@property (nonatomic) NSArray headerLanguages;
@property (nonatomic) NSArray indexSections;
@property (nonatomic) NSString searchTransform;
@property (nonatomic) NSString nameTransform;
@property (nonatomic) NSString searchCollatorIdentifier;
@property (nonatomic) NSString sortCollatorIdentifier;
@property (nonatomic) BOOL indexExtraTokenizations;
- (id)indexSections;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCollator:;
- (id)headerLanguages;
- (id)initWithCollator:URL:;
- (id)searchTransform;
- (id)nameTransform;
- (id)searchCollatorIdentifier;
- (id)sortCollatorIdentifier;
- (BOOL)indexExtraTokenizations;
+ (id)defaultSortCollatorIdentifier;
+ (id)sectionURL;
+ (id)indexSectionsFromPropertyList:;
+ (id)languageHeaderSectionsFromPropertyList:collator:;
@end
