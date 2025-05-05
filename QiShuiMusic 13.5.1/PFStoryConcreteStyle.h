@interface PFStoryConcreteStyle : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString originalColorGradeCategory;
@property (nonatomic) q customColorGradeKind;
@property (nonatomic) NSString songAssetIdentifier;
@property (nonatomic) BOOL isCustomized;
@property (nonatomic) NSString diagnosticDescription;
- (id)init;
- (id)identifier;
- (id)diagnosticDescription;
- (BOOL)isCustomized;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (BOOL)isEqualToStyle:;
- (id)originalColorGradeCategory;
- (long long)customColorGradeKind;
- (id)songAssetIdentifier;
- (id)initWithIdentifier:originalColorGradeCategory:customColorGradeKind:songAssetIdentifier:isCustomized:;
@end
