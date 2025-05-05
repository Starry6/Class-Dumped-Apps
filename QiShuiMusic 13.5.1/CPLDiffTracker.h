@interface CPLDiffTracker : NSObject
@property (nonatomic) BOOL shouldCompareAllProperties;
@property (nonatomic) BOOL objectsAreTotallyDifferent;
@property (nonatomic) NSSet differingProperties;
- (id)redactedDescription;
- (void).cxx_destruct;
- (id)description;
- (void)noteObjectAreTotallyDifferent;
- (void)noteObjectsDifferOnProperty:;
- (BOOL)areObjectsDifferentOnProperty:;
- (BOOL)shouldCompareAllProperties;
- (void)setShouldCompareAllProperties:;
- (BOOL)objectsAreTotallyDifferent;
- (id)differingProperties;
@end
