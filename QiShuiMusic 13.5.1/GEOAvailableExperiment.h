@interface GEOAvailableExperiment : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString name;
@property (nonatomic) NSArray branches;
- (id)identifier;
- (id)initWithIdentifier:name:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (void)_addBranch:;
- (id)_branchForLabel:;
- (id)branches;
@end
