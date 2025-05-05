@interface PRLikenessChange : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) Q type;
@property (nonatomic) NSString changedLikenessID;
@property (nonatomic) NSNumber changedLikenessVersion;
@property (nonatomic) NSArray dirtyLikenessProperties;
- (id)identifier;
- (void)setType:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)description;
- (void)setIdentifier:;
- (id)changedLikenessID;
- (void)setChangedLikenessID:;
- (id)changedLikenessVersion;
- (void)setChangedLikenessVersion:;
- (id)dirtyLikenessProperties;
- (void)setDirtyLikenessProperties:;
+ (id)descriptionForChangeType:;
+ (id)changeForLikeness:withType:;
+ (unsigned long long)changeTypeFromDescription:;
@end
