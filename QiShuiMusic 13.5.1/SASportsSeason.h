@interface SASportsSeason : AceObject
@property (nonatomic) NSNumber currentSeasonYear;
@property (nonatomic) NSString relativeSeasonYear;
@property (nonatomic) NSNumber seasonYear;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)currentSeasonYear;
- (void)setCurrentSeasonYear:;
- (id)relativeSeasonYear;
- (void)setRelativeSeasonYear:;
- (id)seasonYear;
- (void)setSeasonYear:;
+ (id)season;
+ (id)seasonWithDictionary:context:;
@end
