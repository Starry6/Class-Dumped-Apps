@interface CRScriptCategory : NSObject
@property (nonatomic) NSString categoryName;
@property (nonatomic) Q categoryRevision;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)categoryName;
- (unsigned long long)categoryRevision;
- (id)initWithCategoryName:;
+ (id)supportedCategories;
+ (float)confidenceThreshold;
+ (unsigned long long)categoryRevision;
+ (id)sequenceScriptToScriptCategoryMapping;
@end
